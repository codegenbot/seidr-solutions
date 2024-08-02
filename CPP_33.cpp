#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            vector<int> temp;
            for (int j = max(0, i-2); j <= min(i+2, l.size()-1); j++) {
                if (j % 3 == 0)
                    temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            result.insert(result.end(), temp.begin(), temp.end());
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}