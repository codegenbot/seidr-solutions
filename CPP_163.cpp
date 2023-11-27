#include <iostream>
#include <vector>

std::vector<int> generate_integers(int a, int b);
bool issame(std::vector<int> a, std::vector<int> b);

bool issame(std::vector<int> a, std::vector<int> b) {
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
    if (issame(generate_integers(17, 89), {})) {
        std::cout << "Generated integers are the same as the empty vector." << std::endl;
    }
    return 0;
}