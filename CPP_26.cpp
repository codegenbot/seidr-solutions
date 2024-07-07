#include <vector>
#include <algorithm>

using namespace std;

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> unique;
    for (int num : numbers) {
        if (find(unique.begin(), unique.end(), num) == unique.end()) {
            unique.push_back(num);
        }
    }
    return unique;
}