#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            // indices that are divisible by three
            vector<int> temp;
            temp.resize(l.size());
            copy(l.begin(), l.end(), temp.begin());
            sort(temp.begin() + i, temp.end());
            copy(temp.begin() + i, temp.end(), result.begin() + i);
        } else {
            // other indices
            result.push_back(l[i]);
        }
    }
    return result;
}