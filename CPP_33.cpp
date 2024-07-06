#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            // Sort the elements at indices divisible by three
            vector<int> temp(l.begin() + i, l.begin() + i + 1);
            sort(temp.begin(), temp.end());
            result.insert(result.end(), temp.begin(), temp.end());
        } else {
            // Keep the elements at other indices as they are
            result.push_back(l[i]);
        }
    }
    return result;
}