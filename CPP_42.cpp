#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> incr_list(const vector<int>& l) {
    vector<int> result = l; 
    for (int i = 0; i < result.size(); ++i) {
        result[i]++;
    }
    return result;
}