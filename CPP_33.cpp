```c++
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    return std::equal(a.begin(), a.end(), b.begin());
}

vector<int> sort_third(vector<int> arr) {
    int n = arr.size();
    int size_per_third = n / 3;
    vector<vector<int>> thirds(3);

    for (int i = 0; i < n; i++) {
        int idx = i / size_per_third;
        thirds[idx].push_back(arr[i]);
    }

    for (auto &third : thirds) {
        sort(third.begin(), third.end());
    }

    vector<int> result;
    int pos = 0;
    for (int i = 0; i < n; i++) {
        int idx = i / size_per_third;
        for (int j = 0; j < size_per_third && pos < n; j++) {
            if (i % size_per_third == idx) {
                result.push_back(thirds[idx][j]);
                pos++;
            }
        }
    }

    return result;
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
            sort_third(temp);
            res.insert(res.end(), temp.begin(), temp.end());
        } else {
            res.push_back(l[i]);
        }
   }
    
    for(int i : res) cout << i << " ";
    return 0;
}