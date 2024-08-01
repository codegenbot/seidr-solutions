#include <iostream>
#include <vector>
using namespace std;

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result = numbers;
    sort(result.begin(), result.end());
    for (int i = 0; i < result.size() - 1; i++) {
        if (result[i] == result[i + 1]) {
            result.erase(result.begin() + i);
            i--;
        }
    }
    return result;
}