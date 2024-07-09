#include <vector>
#include <algorithm>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result;
    
    if (find_if(lst.begin(), lst.end(), [](int x){return x < 0;}) != lst.end()) {
        result.push_back(*min_element(cbegin(lst), cend(lst), [](int a, int b){ return a > 0 && b > 0; }));
    } else {
        result.push_back(0);
    }
    
    if (find_if(lst.begin(), lst.end(), [](int x){return x > 0;}) != lst.end()) {
        result.push_back(*max_element(cbegin(lst), cend(lst), [](int a, int b){ return a < 0 && b < 0; }));
    } else {
        result.push_back(0);
    }
    
    return result;
}