#include <vector>

using namespace std;

vector<int> incr_list(vector<int> l) {
    vector<int> result;
    for (int i : l) {
        result.push_back(i + 1);
    }
    return result;
}