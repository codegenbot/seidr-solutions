```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() != b.size()) return false;
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> sort_third(std::vector<int> l) {
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
            result.insert(result.end(), make_move(temp));
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}

vector<int> make_move(vector<int> v) {
    vector<int> res;
    for(int i = 0; i < v.size(); i++) {
        if(i % 3 == 0) {
            res.push_back(v[i]);
        }
    }
    return res;
}

int main() {
    std::vector<int> l = {4, 2, 9, 6, 23, 12, 34, 11};
    std::vector<int> res = sort_third(l);
    for(int i : res) cout << i << " ";
}