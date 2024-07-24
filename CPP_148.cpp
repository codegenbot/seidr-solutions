int main() {
    std::pair<std::string, std::string> planets;
    std::cout << "Enter two planet names: ";
    std::string planet1, planet2;
    std::cin >> planet1 >> planet2;
    planets = std::make_pair(planet1, planet2);
    
    std::pair<std::string, std::string> result = bf(planets);
    if(issame(planets, result)) {
        std::cout << "same";
    } else {
        std::cout << "not same";
    }
    return 0;
}