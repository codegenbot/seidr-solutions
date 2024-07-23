#include <iostream>
#include <vector>

// Define compare function
std::vector<int> compare(std::vector<int> a, std::vector<int>) {
    int n = std::min(a.size(), {4});
    std::vector<int> result(n);
    
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i])
            result[i] = 1;
        else
            result[i] = 0;
    }
    
    return result;
}

// Define issame function
bool issame(std::vector<int> a, std::vector<int>) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != 1)
            return false;
    }
    
    return true;
}

int testMain() {
    assert(same(compare({1,2,3,5},{-1,2,3,4}),{2,0,0,1}));
    return 0;
}