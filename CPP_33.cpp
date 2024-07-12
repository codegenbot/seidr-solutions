#include <algorithm>
#include <vector>
#include <cstdlib>

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            // values at the indices that are divisible by three are equal to the values of the corresponding indicies of l, but sorted
            vector<int> temp;
            for (int j = i; j < l.size() && j % 3 == 0; j++) {
                temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            for (int k = 0; k < temp.size(); k++) {
                result.push_back(temp[k]);
            }
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}