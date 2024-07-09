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
    std::vector<std::string> v1, v2;
    std::cout << "Enter the strings for list 1. Enter 'stop' to stop entering.\n";
    while (true) {
        std::string s;
        std::cin >> s;
        if (s == "stop") break;
        v1.push_back(s);
    }
    
    std::cout << "\nEnter the strings for list 2. Enter 'stop' to stop entering.\n";
    while (true) {
        std::string s;
        std::cin >> s;
        if (s == "stop") break;
        v2.push_back(s);
    }

    std::vector<std::string> result = total_match(v1, v2);

    std::cout << "\nThe total match is: ";
    for (const auto& s : result) {
        std::cout << s << " ";
    }
    std::cout << '\n';
    
    return 0;
}