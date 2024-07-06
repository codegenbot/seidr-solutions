#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result;
    for (int i : l) {
        if (find(result.begin(), result.end(), i) == result.end()) {
            result.push_back(i);
        }
    }
    sort(result.begin(), result.end());
    return result;
}