#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int sum1 = 0;
    for (const std::string& s : lst1) {
        sum1 += s.length();
    }
    
    int sum2 = 0;
    for (const std::string& s : lst2) {
        sum2 += s.length();
    }
    
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else return lst1;
}