```
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    return std::equal(a.begin(), a.end(), b.begin());
}

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    for(int i = 0; i < l.size(); i++) {
        if(i % 3 == 0) {
            vector<int> temp;
            for(int j = 0; j < l.size(); j++) {
                if(j % 3 == 0) {
                    temp.push_back(l[j]);
                }
            }
            sort(temp.begin(), temp.end());
            int idx = 0;
            for(int k = 0; k < temp.size(); k++) {
                if(k % 3 == 0) {
                    result.push_back(temp[k]);
                    idx++;
                }
                if(idx > 1) break;
            }
        } else {
            result.push_back(l[i]);
        }
    }
    return result;

} 

#include<iostream>
using namespace std;

int main() {
    vector<int> l = {4, 2, 9, 6, 23, 12, 34, 11};
    vector<int> res = sort_third(l);
    for(int i : res) cout << i << " ";
}