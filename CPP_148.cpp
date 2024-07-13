int main() {
    std::vector<std::string> inputPlanets;
    
    int n;
    std::cout << "Enter the number of planets: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::string planet;
        std::cout << "Enter the name of the " << (i+1) << "th planet: ";
        std::cin >> planet;
        inputPlanets.push_back(planet);
    }
    
    if(!inputPlanets.empty()) {
        std::vector<std::string> result = bf(inputPlanets, "Jupiter", "Makemake");
        
        if (!result.empty())
            std::cout << "Output: ";
        else
            std::cout << "No Output";
        
    } else {
        std::cout << "No Output";
    }
    
    return 0;
}