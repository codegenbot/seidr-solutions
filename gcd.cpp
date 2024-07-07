```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> indices(std::string text, std::string target) {
    std::vector<int> res;
    for(int i=0; i<=(text.length()-target.length()); i++) {
        bool flag=true;
        for(int j=0; j<target.length(); j++) {
            if(text[i+j]!=target[j]) {
                flag=false;
                break;
            }
        }
        if(flag) res.push_back(i);
    }
    return res;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, abs(a % b));
}

int main() {
    int a = 12;
    int b = 15; 
    std::cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;

    std::string text = "hello world hello";
    std::string target = "ello";
    std::vector<int> result = indices(text, target);
    for(int i : result) {
        std::cout << "Target found at index " << i << std::endl;
    }

    return 0;
}