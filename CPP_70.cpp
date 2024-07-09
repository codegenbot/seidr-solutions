```cpp
#include <algorithm>
using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    if (lst.empty()) return lst;
    
    vector<int> result;
    vector<int> temp = lst;
    sort(temp.begin(), temp.end());
    int min = *min_element(temp.begin(), temp.end());
    int max = *max_element(temp.begin(), temp.end());

    while (!temp.empty()) {
        if (temp[0] == min) {
            result.push_back(min);
            temp.erase(temp.begin());
            min = *min_element(temp.begin(), temp.end());
        } else if (temp[0] == max) {
            result.push_back(max);
            temp.erase(temp.begin());
            max = *max_element(temp.begin(), temp.end());
        } else {
            result.push_back(temp[0]);
            temp.erase(temp.begin());
        }
    }

    return result;
}