#include <iostream>
#include <vector>

std::vector<int> generate_integers(int a, int b) {
    std::vector<int> result;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(std::vector<int>& a, std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> result = generate_integers(17, 89);
    if (issame(result, {})) {
        std::cout << "Result is empty." << std::endl;
    } else {
        std::cout << "Result is not empty." << std::endl;
    }
    return 0;
}