#include <vector>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;

    std::vector<int> result = make_a_pile(n);

    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> result;
    int count = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            result.push_back(count);
        else
            result.push_back(count + 1);
        count += (count % 2 == 0) ? 2 : 1;
    }
    return result;
}