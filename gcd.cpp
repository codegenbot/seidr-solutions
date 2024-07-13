#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int last_index = -1;
    
    while (last_index != std::string::npos) {
        last_index = text.find(target);
        
        if(last_index == std::string::npos)
            break;

        result.push_back(last_index);
        
        if (!target.empty() && target[0] == text[last_index + target.length()])
            continue;
        
        while (last_index > 0 && text[last_index - 1] == target[0])
            last_index--;
    }
    
    return result;
}

int greatestCommonDivisor(int a, int b) {
    if(b == 0)
        return a;
    else
        return greatestCommonDivisor(b, a % b);
}