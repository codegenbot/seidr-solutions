#include <vector>
#include <cassert>

using namespace std;

vector<int> incr_list(const vector<int>& l) {
    vector<int> result = l;
    for (int &num : result) {
        num++;
    }
    return result;
}