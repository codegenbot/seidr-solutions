```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> total_match(std::vector<std::string> vec1, std::vector<std::string> vec2) {
    int sum1 = 0, sum2 = 0;
    for (const auto& s : vec1) {
        sum1 += s.length();
    }
    for (const auto& s : vec2) {
        sum2 += s.length();
    }
    if (sum1 < sum2) return vec1;
    else if (sum1 > sum2) return vec2;
    else return vec1;
}

int main() {
    std::vector<std::string> a, b;
    int n1, n2;
    std::cout << "Enter the size of first vector: ";
    std::cin >> n1;
    for (int i = 0; i < n1; ++i) {
        std::string s;
        std::cout << "Enter string for vector 1: ";
        std::getline(std::cin, s);
        a.push_back(s);
    }
    
    std::cout << "Enter the size of second vector: ";
    std::cin >> n2;
    for (int i = 0; i < n2; ++i) {
        std::string s;
        std::cout << "Enter string for vector 2: ";
        std::getline(std::cin, s);
        b.push_back(s);
    }
    
    if(issame(a,b))
        std::cout << "The two vectors are the same.\n";
    else
        a = total_match(a,b);
        
    std::cout << "The resulting vector is: ";
    for (const auto& s : a) {
        std::cout << s << " ";
    }
    std::cout << std::endl;
    
    return 0;
}