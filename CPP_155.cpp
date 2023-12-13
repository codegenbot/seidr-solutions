#include <vector>
#include <utility>

void issame(std::vector<int> a, std::vector<int> b) {
    // ...
}

std::pair<int, int> even_odd_count(int num);

int main() {
    assert (std::is_same(even_odd_count(0), {1, 0}));
    return 0;
}

std::pair<int, int> even_odd_count(int num) {
    std::vector<int> result;
    int countEven = 0, countOdd = 0;
    while (num > 0) {
        if (num % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
        num /= 10;
    }
    return std::make_pair(countEven, countOdd);
}