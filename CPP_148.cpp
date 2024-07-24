```cpp
#include <iostream>
#include <vector>
#include <string>

std::pair<std::string, std::string> bf(std::pair<std::string, std::string> p) {
    // your implementation of bf function here
    return p;
}

bool issame(std::vector<std::pair<std::string, std::string>> a, std::vector<std::pair<std::string, std::string>> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (!(issame({{a[i].first,a[i].second}},{{b[i].first,b[i].second}})))
            return false;
    return true;
}

void start() {
    std::cout << "Enter two planet names: ";
    std::string planet1, planet2;
    std::cin >> planet1 >> planet2;
    
    std::vector<std::pair<std::string, std::string>> a;
    a.push_back(std::make_pair(planet1, planet2));
    
    std::cout << "Enter two more planet names: ";
    std::cin >> planet1 >> planet2;
    a.push_back(std::make_pair(planet1, planet2));
    
    std::cout << "Enter two more planet names: ";
    std::cin >> planet1 >> planet2;
    a.push_back(std::make_pair(planet1, planet2));
    
    std::vector<std::pair<std::string, std::string>> b;
    std::cout << "Enter two more planet names: ";
    std::cin >> planet1 >> planet2;
    b.push_back(std::make_pair(planet1, planet2));
    
    std::cout << "Enter two more planet names: ";
    std::cin >> planet1 >> planet2;
    b.push_back(std::make_pair(planet1, planet2));
    
    if (issame(a, b)) {
        std::cout << "same";
    } else {
        std::cout << "not same";
    }
    return;
}

int main() { 
    start();
    return 0;
}