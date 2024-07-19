#include <string>
#include <cctype>
#include <vector>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size() && std::all_of(a.begin(), a.end(), [&](const auto& x){return x == *(b.begin()+a.begin()-b.begin());});
}

int main() {
    std::string planet1, planet2;
    std::cout << "Enter the two planets (separated by space): ";
    std::cin >> planet1 >> planet2;

    std::vector<std::string> a = {planet1}, b = {planet2};

    if (issame(a, b)) {
        std::cout << "The two planets are the same." << std::endl;
    } else {
        std::cout << "The two planets are different." << std::endl;
    }
}