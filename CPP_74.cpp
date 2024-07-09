#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int sum1 = 0, sum2 = 0;
    for (const auto& s : lst1) {
        sum1 += s.length();
    }
    for (const auto& s : lst2) {
        sum2 += s.length();
    }
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else return lst1;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    std::vector<std::string> lst1;
    std::cout << "Enter the strings for list 1: ";
    int n1 = 0;
    while (std::cin >> lst1[n1]) {
        if (++n1 == 10) break;
    }
    std::vector<std::string> lst2;
    std::cout << "Enter the strings for list 2: ";
    int n2 = 0;
    while (std::cin >> lst2[n2]) {
        if (++n2 == 10) break;
    }
    
    std::cout << "List 1: ";
    for (const auto& s : lst1) {
        std::cout << s << " ";
    }
    std::cout << "\n";
    std::cout << "List 2: ";
    for (const auto& s : lst2) {
        std::cout << s << " ";
    }
    std::cout << "\n";
    
    if (issame(lst1, lst2)) 
        std::cout << "The two lists are the same.\n"; 
    else 
        std::cout << "total_match: ";
    for (const auto& s : total_match(lst1, lst2)) {
        std::cout << s << " ";
    }
    std::cout << "\n";
    
    return 0;
}