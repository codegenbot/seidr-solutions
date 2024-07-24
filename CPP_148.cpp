int main() {
    std::cout << "Enter two planet names: ";
    std::string planet1, planet2;
    std::cin >> planet1 >> planet2;
    std::pair<std::string, std::string> planets = {planet1, planet2};
    assert(bf(planets).size() == 0);  
    return 0;
}