#include <algorithm>
using namespace std;

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float i : l) {
        if (i > 0)
            result.push_back(i);
    }
    return result;
}