#include <string>
#include <vector>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2);

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
    return 0;
}

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    int count = 0;
    for (int i = 0; i < lst1.size(); i++) {
        if (lst1[i] % 2 != 0) {
            count++;
        }
    }
    if (count > lst2.size()) {
        return "NO";
    } else {
        return "YES";
    }
}