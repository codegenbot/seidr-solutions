#include <vector>

using namespace std;

vector<int> incr_list(vector<int> l) {
    vector<int> result;
    for (int x : l) {
        result.push_back(x + 1);
    }
    return result;
}