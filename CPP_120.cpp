```cpp
#include <iostream>
#include <vector>

int maximum(std::vector<int>& v) {
    int max_val = v[0];
    for(int i=1; i<v.size();i++){
        if(v[i] > max_val)
            max_val = v[i];
    }
    return max_val;
}

bool issame(std::vector<int>& a, std::vector<int>& b) {
    if(a.size() != b.size()) 
        return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main()
{
    std::vector<int> test = {1, 2, 3, -23, 243, -400, 0};
    if(issame({}, std::vector<int>{}) || issame({1, 2, 3, -23, 243, -400, 0}, test)) {
        std::cout << "Test Passed\n";
    } else {
        std::cout << "Test Failed\n";
    }
    return 0;
}