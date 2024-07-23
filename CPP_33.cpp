#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    sort(l.begin(), l.end());
    vector<int> result;
    for (int i = 0; i < l.size(); i += 3) {
        if (i + 2 < l.size()) { 
            result.push_back(*std::max_element(l.begin() + i, l.begin() + i + 3));
        } else if (i < l.size()) {
            result.push_back(l[i]);
        }
    }
    return result;
}