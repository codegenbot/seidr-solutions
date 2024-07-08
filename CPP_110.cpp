```cpp
#include <vector>
#include <string>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            bool found = false;
            for (int num2 : lst2) {
                if (num2 % 2 == 0) {
                    int temp = lst1.back();
                    lst1.pop_back();
                    lst1.push_back(num2);
                    lst2.pop_back();
                    lst2.push_back(temp);
                    found = true;
                    break;
                }
            }
            if (!found) return "NO";
        }
    }
    return "YES";
}

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
    return 0;
}