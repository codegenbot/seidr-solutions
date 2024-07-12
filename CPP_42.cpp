#include <vector>

using namespace std;

vector<int> incr_vector(const vector<int>& l) {
    vector<int> result;
    for (int num : l) {
        result.push_back(num + 1);
    }
    return result;
}