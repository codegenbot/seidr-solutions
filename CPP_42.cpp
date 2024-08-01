#include <vector>
using namespace std;

vector<int> incr_vector(vector<int> l) {
    vector<int> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        result[i] = l[i] + 1;
    }
    return result;
}