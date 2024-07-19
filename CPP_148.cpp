```cpp
#include <string>
#include <cctype>
#include <vector>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size() && std::all_of(a.begin(), a.end(), [&](const auto& x){return x == b[0];});
}

int main() {
    std::vector<std::string> a, b;
    a.push_back(" "); 
    b.push_back(" ");
    std::cout << "Enter the two planets (separated by space): ";
    std::cin >> a[0] >> b[0];

    if (issame(a, b)) {
        std::cout << "The two planets are the same." << std::endl;
    } else {
        std::cout << "The two planets are different." << std::endl;
    }
    return 0;