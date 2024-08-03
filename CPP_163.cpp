#include <cassert>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    for(int num : a) {
        if (num % 2 == 0) {
            return true;
        }
    }
    return false;
}

std::vector<int> generate_integers(int start, int end) {
    std::vector<int> result;
    for (int i = start; i <= end; i++) {
        result.push_back(i);
    }
    return result;
}

int main() {
    assert(issame(generate_integers(17, 89), std::vector<int>()) == true);
    return 0;
}