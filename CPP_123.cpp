#include <vector>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

std::vector<int> get_odd_collatz(int start) {
    std::vector<int> sequence;
    while (start != 1) {
        if (start % 2 != 0)
            sequence.push_back(start);
        start = start / 2 + (start % 2);
    }
    return sequence;
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
}