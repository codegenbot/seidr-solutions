#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;
}

std::vector<std::string> eat(int number, int need, int remaining) {
    std::string task = "";
    if (number + need > 1000)
        task = "Fail";
    else
        task = "Pass";
    
    std::string result;
    int left = max(0, min((number + need) - 1000, remaining));
    if (left == 0)
        result = "Cannot eat anything";
    else if (left > remaining / 2)
        result = "Can eat half";
    else
        result = "Can eat all";
    
    return {task, result};
}