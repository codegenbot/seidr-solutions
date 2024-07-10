#include <algorithm>
#include <vector>
using namespace std;

bool issame(int a, int b) {
    if (a % 2 == 0 && b % 2 == 0)
        return true;
    else if (a % 2 != 0 && b % 2 != 0)
        return true;
    else
        return false;
}

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
        if (!lst.empty()) {
            int max_val = *max_element(lst.begin(), lst.end());
            vector<int> temp;
            for (int i : lst) {
                if (issame(i, max_val))
                    temp.push_back(i);
            }
            result.insert(result.end(), temp.rbegin(), temp.rend());
            lst.erase(std::remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    return result;
}