#include <vector>
#include <algorithm>

using namespace std;

pair<bool, vector<int>> compare(vector<int> a, vector<int> b) {
    if (lexicographical_compare(a.begin(), a.end(), b.begin(), b.end())) {
        return {true, a};
    } else {
        return {false, b};
    }
}