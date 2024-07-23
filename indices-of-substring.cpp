Here is the solution:

#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;

    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += 1; // advance the search position to avoid overlapping targets
    }

    return result;
}

int main() {
    int t;
    std::cin >> t;
    
    for(int i=0; i<t; ++i)
    {
        std::string text;
        std::cin >> text;
        std::string target;
        std::cin >> target;
        
        std::vector<int> indices = indicesOfSubstring(text, target);
        
        for (int index : indices) 
            std::cout << index << " ";
        std::cout << std::endl;
    }
    
    return 0;
}