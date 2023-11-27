#include <vector>
#include <algorithm>

vector<int> sort_third(vector<int> l) {
    vector<int> sorted_third;
    vector<int> indicies_mod_three;
    for(int i = 0; i < l.size(); i++) {
        if(i % 3 == 0) {
            indicies_mod_three.push_back(i);
        }
    }
    sort(indicies_mod_three.begin(), indicies_mod_three.end());
    for(int i = 0; i < l.size(); i++) {
        if(find(indicies_mod_three.begin(), indicies_mod_three.end(), i) != indicies_mod_three.end()) {
            sorted_third.push_back(l[i]);
        }
        else {
            sorted_third.push_back(l[i]);
        }
    }
    return sorted_third;
}