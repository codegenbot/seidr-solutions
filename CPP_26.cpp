```cpp
#include <iostream>
#include <vector>

// Function to remove duplicates from a vector of integers
std::vector<int> remove_duplicates(const std::vector<int>& arr) {
    std::vector<int> noDup;
    for (int i : arr) {
        if (std::find(noDup.begin(), noDup.end(), i) == noDup.end())
            noDup.push_back(i);
    }
    return noDup;
}

// Function to compare two vectors of integers
bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) 
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

// Function to compare two vectors of integers
bool same(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) 
        return false;
    for (int i = 0; i < a.size(); i++) {
        bool flag = true;
        for (int j = 0; j < b.size(); j++) {
            if (a[i] == b[j]) {
                flag = false;
                break;
            }
        }
        if (!flag)
            return false;
    }
    return true;
}

int main() {
    assert(same(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5}));
    return 0;
}