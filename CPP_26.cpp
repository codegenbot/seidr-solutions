#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for (int num : numbers) {
        if (find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    vector<int> numbers = {1, 2, 3, 2, 4};
    vector<int> result = remove_duplicates(numbers);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}