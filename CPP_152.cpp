#include <iostream>
#include <vector>

std::vector<int> compare(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    int i = 0, j = 0;
    
    while (i < a.size() && j < b.size()) {
        if (a[i] > b[j]) {
            result.push_back(2);
            i++;
            j++;
        } else if (a[i] < b[j]) {
            result.push_back(1);
            i++;
            j++;
        } else {
            result.push_back(0);
            i++;
            j++;
        }
    }
    
    while (i < a.size()) {
        result.push_back(2);
        i++;
    }
    
    while (j < b.size()) {
        result.push_back(1);
        j++;
    }
    
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;
}

int testMain() {
    assert(same(compare({1,2,3,5},{-1,2,3,4}),{2,0,0,1}));
    return 0;
}