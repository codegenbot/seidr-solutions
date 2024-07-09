#include <iostream>
#include <vector>
#include <set>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> result = s1;
    for (auto it = s2.begin(); it != s2.end(); ++it) {
        if (result.find(*it) != result.end()) {
            result.erase(it);
        }
    }

    vector<int> final_result(result.begin(), result.end());
    return final_result;
}

int main() {
    vector<int> l1 = {4, 3, 2, 8};
    vector<int> l2 = {4, 5, 6};

    vector<int> result = common(l1, l2);
    
    for (auto i : result) {
        cout << i << " ";
    }
    
    return 0;
}