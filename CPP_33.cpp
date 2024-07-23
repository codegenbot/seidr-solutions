#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            int start = max(0, i-2);
            int end = min(i+1, l.size());
            vector<int> temp(l.begin()+start, l.begin()+end);
            sort(temp.begin(), temp.end());
            result.insert(result.end(), temp.begin(), temp.end());
        } else
            result.push_back(l[i]);
    }
    return result;
}