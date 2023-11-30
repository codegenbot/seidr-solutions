#include <vector>
#include <cassert>

std::vector<int> make_a_pile(int n);

bool issame(std::vector<int> a, std::vector<int> b);

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> result;
    int stones = n;
    result.push_back(stones);

    for (int i = 1; i < n; i++) {
        if (n % 2 == 0) {
            stones += 2;
        } else {
            stones += 1;
        }
        result.push_back(stones);
    }

    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}