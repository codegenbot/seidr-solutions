#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            vector<int> temp;
            for (int j = i; j < l.size() && j % 3 == 0; j++) {
                temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            int k = 0;
            for (int j = i; j < l.size() && j % 3 == 0; j++, k++) {
                l[j] = temp[k];
            }
        }
    }
    return l;
}