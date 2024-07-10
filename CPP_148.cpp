```cpp
std::string planet1, planet2;
std::cout << "Enter the first planet: ";
std::cin >> planet1;
std::cout << "Enter the second planet: ";
std::cin >> planet2;
std::vector<std::string> result = bf(planet1, planet2);
if (result.empty()) {
    std::cout << "No planets found between " << planet1 << " and " << planet2 << ".\n";
} else {
    std::cout << "Planets between " << planet1 << " and " << planet2 << ": ";
    for (const auto& planet : result) {
        std::cout << planet << " ";
    }
    std::cout << "\n";
}
int main;