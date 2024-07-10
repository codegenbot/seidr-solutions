#include <initializer_list>
#include <cassert>
#include <vector>

std::string exchange(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return "NO";
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > b[i]) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    assert(exchange({100, 200}, {200, 200}) == "NO");
    std::vector<int> a;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        a.push_back(x);
    }
    std::vector<int> b(a);
    std::cout << "Result: " << exchange(a, b) << std::endl;
    return 0;
}