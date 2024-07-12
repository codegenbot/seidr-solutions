std::vector<std::string> bf(const std::vector<std::string>& planets, const std::string& planet1, const std::string& planet2) {
    int index1 = -1, index2 = -1;
    
    for (int i = 0; i < planets.size(); i++) {
        if (planets[i][0] == planet1[0]) {
            index1 = i;
        } else if (planets[i][0] == planet2[0]) {
            index2 = i;
        }
    }
    
    if (index1 == -1 || index2 == -1)
        return {};
    
    std::vector<std::string> result;
    for (int i = index1 + 1; i < index2; i++) {
        result.push_back(planets[i]);
    }
    
    return result;
}