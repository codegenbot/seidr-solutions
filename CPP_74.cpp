#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::string b) {
    if (a.size() != 1 || a[0] != b) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b) {
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
        return issame(lst1, *lst2.begin()) ? lst1 : lst2;
    } else if (sum1 > sum2) {
        return issame(*lst1.begin(), std::string("")); ? lst2 : lst1;
    } else {
        return issame(lst1, std::string("")) ? lst1 : lst2;
    }
}

int main() {
    assert(std::equal(total_match({"this"}, {}), {}));
}