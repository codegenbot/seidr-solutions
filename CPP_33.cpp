#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    for (int x = 0; x < l.size(); x++) {
        if (x % 3 == 0) {
            vector<int> temp;
            for (int y = 0; y < l.size(); y++) {
                if (y % 3 == 0) {
                    temp.push_back(l[y]);
                }
            }
            sort(temp.begin(), temp.end());
            result.insert(result.end(), temp.begin(), temp.end());
        } else {
            result.push_back(l[x]);
        }
    }
    return result;
}