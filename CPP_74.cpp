```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a) {
    return std::all_of(a.begin(), a.end(), [](const std::string& s){ return !s.empty(); });
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
        return issame(lst1) ? lst1 : lst2;
    }
}

int main() {
    assert(std::equal(total_match({"this"}, {}), {}));
}