#include <algorithm>
using namespace std;

vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) { // even index
            vector<float> temp;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) { // even index in the subvector
                    temp.push_back(l[j]);
                }
            }
            sort(temp.begin(), temp.end());
            result.insert(result.begin() + i, temp[0]);
        } else { // odd index
            result.push_back(l[i]);
        }
    }
    return result;
}