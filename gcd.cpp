```cpp
#include <iostream>
#include <string>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, abs(a % b));
}

int main() {
    std::string str1 = "Indices of Substring (CW)";
    std::string str2 = "CW";
    
    size_t pos = 0;
    vector<int> indices;
    while ((pos = str1.find(str2)) != string::npos) {
        indices.push_back(pos);
        pos += str2.size();
    }
    
    int a = 12;
    int b = 15; 
    std::cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;
    for (int index : indices) {
        std::cout << "Indices of Substring 'CW' are: " << index << std::endl;
    }
    
    return 0;
}