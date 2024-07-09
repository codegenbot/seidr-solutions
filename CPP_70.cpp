#include <algorithm>
using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    if (lst.empty()) return lst;
    
    vector<int> result;
    sort(lst.begin(), lst.end());
    int min = *min_element(lst.begin(), lst.end());
    int max = *max_element(lst.begin(), lst.end());

    for(int i : lst) {
        if(i == min || i == max)
            continue;
        if(i < min)
            min = i;
        else if(i > max)
            max = i;
    }

    while (lst.size() > 0) {
        if (*min_element(lst.begin(), lst.end()) != min) {
            result.push_back(*min_element(lst.begin(), lst.end()));
            lst.erase(std::remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());
        } else if (*max_element(lst.begin(), lst.end()) != max) {
            result.push_back(*max_element(lst.begin(), lst.end()));
            lst.erase(std::remove(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())), lst.end());
        } else {
            result.push_back(lst[0]);
            lst.erase(lst.begin());
        }
    }

    return result;
}