#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> unique(std::vector<int> l) {
    std::vector<int> result(l.begin(), unique_copy(l.begin(), l.end()));
    sort(result.begin(), result.end());
    return vector<int>(unique_copy(result.begin(), result.end()));
}

std::vector<int>::iterator unique_copy(std::vector<int>::iterator start, std::vector<int>::iterator end) {
    if (start == end)
        return end;
 
    std::vector<int> temp;
    for (; start != end; ++start) {
        bool found = false;
        for (auto it = temp.begin(); it != temp.end(); ++it) {
            if (*it == *start) {
                found = true;
                break;
            }
        }
        if (!found)
            temp.push_back(*start);
    }
    return temp.begin();
}

int main() {
    assert(issame(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}) , {0, 2, 3, 5, 9, 123}));
    std::cout << "Success";
    return 0;
}