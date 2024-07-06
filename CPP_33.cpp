```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() != b.size()) return false;
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> result;
    int count = 0;
    for(auto value : l) {
        if(count % 3 == 0) {
            std::vector<int> temp;
            for(int j = 0; j < l.size(); j++) {
                if(j % 3 == 0) {
                    temp.push_back(l[j]);
                }
            }
            std::sort(temp.begin(), temp.end());
            result.insert(result.end(), make_move(temp));
        } else {
            result.push_back(value);
        }
        count++;
    }
    return result;
}

std::vector<int> make_move(std::vector<int> v) {
    std::vector<int> res;
    int count = 0;
    for(auto value : v) {
        if(count % 3 == 0) {
            res.push_back(value);
        }
        count++;
    }
    return res;
}

int main() {
    std::vector<int> l = {4, 2, 9, 6, 23, 12, 34, 11};
    std::vector<int> res = sort_third(l);
    int count = 0;
    for(auto value : res) {
        if(count % 3 == 0)
            std::cout << value << " ";
        else
            std::cout << value << " ";
        count++;
    }
    std::cout << '\n';
}