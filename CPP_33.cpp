#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l){
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            std::vector<int> temp;
            for (int j = i; j < l.size() && j % 3 == 0; j++) {
                temp.push_back(l[j]);
            }
            std::sort(temp.begin(), temp.end());
            for (int j = i; j < l.size() && j % 3 == 0; j++) {
                l[j] = temp[j - i];
            }
        }
    }
    return l;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}