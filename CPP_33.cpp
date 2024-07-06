#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    vector<int> l = {4, 2, 9, 6, 23, 12, 34, 11};
    vector<int> res;
    
    for(int i = 0; i < l.size(); i++) {
        if(i % 3 == 0) {
            vector<int> temp;
            int idx = 0;
            for(int j = i; j < l.size() && idx < 2; j++) {
                if(j % 3 == 0) {
                    temp.push_back(l[j]);
                    idx++;
                }
            }
            sort(temp.begin(), temp.end());
            res.insert(res.end(), temp.begin(), temp.end());
        } else {
            res.push_back(l[i]);
        }
    }
    
    for(int i : res) cout << i << " ";
    return 0;
}