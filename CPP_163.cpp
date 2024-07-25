#include <vector>
#include <cassert>

bool issame(std::vector<int>& a, std::vector<int>& b) {
    int sum = 0;
    for (int i : b) {
        sum += i;
    }

    for (int i : a) {
        if (i == sum) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(issame(generate_integers(17, 89), std::vector<int>{}) == false);
    return 0;
}