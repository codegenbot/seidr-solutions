#include <vector>
#include <string>

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    if (sum(lst1) <= sum(lst2)) {
        return lst1;
    } else {
        return lst2;
    }
}

int sum(std::vector<std::string> v) {
    int s = 0;
    for(const auto& str : v) {
        s += str.length();
    }
    return s;
}

int main() {
    std::vector<std::string> list1 = {"abc", "def"};
    std::vector<std::string> list2 = {"xyz", "uvw"};

    std::vector<std::string> result = total_match(list1, list2);

    for (const auto& str : result) {
        std::cout << str << "\n";
    }

    return 0;
}