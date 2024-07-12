int main() {
    std::cout << "Enter the first planet: ";
    std::string planet1;
    std::cin >> planet1;
    std::cout << "Enter the second planet: ";
    std::string planet2;
    std::cin >> planet2;

    // Create a list of planets
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    // Call the bf function with the planets and planets to find the result
    std::vector<std::string> result = bf(planets, planet1, planet2);
    
    if(result.empty()) {
        std::cout << "No planets found between " << planet1 << " and " << planet2 << std::endl;
    } else {
        for (const auto& planet : result) {
            std::cout << planet << " ";
        }
    }
    return 0;
}