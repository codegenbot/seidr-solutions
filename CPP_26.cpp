#include <algorithm>
#include <vector>
#include <cassert>

using namespace std;

vector<int> remove_duplicates(const vector<int>& numbers) {
    vector<int> result;
    for (int num : numbers) {
        if (find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}