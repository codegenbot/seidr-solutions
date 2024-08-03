#include <vector>
#include <cassert>

using namespace std;

vector<int> incr_list(const vector<int>& a) {
    vector<int> result = a;
    for (int i = 0; i < result.size(); i++) {
        result[i]++;
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}