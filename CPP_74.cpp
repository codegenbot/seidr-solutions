```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int sum1 = 0;
    for (const std::string& str : lst1) {
        sum1 += str.length();
    }
    
    int sum2 = 0;
    for (const std::string& str : lst2) {
        sum2 += str.length();
    }

    if (sum1 < sum2) {
        return lst1;
    } else if (sum1 > sum2) {
        return lst2;
    } else {
        if (issame(lst1, lst2)) {
            return lst1;
        } else {
            return lst1;
        }
    }
}

int main() {
    std::vector<std::string> lst1 = {"this"};
    std::vector<std::string> lst2;
    assert(std::equal(total_match(lst1, lst2), {}));
    
    std::cout << "Press a key to exit." << std::endl;
    char ch;
    std::cin >> ch;
}