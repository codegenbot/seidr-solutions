#include <iostream>
#include <vector>

class eat {
public:
    eat(int number, int need, int remaining) : number(number), need(need), remaining(remaining) {}

    std::vector<int> calculate() {
        int total = number + need;
        int eaten = total <= remaining ? total : remaining;
        int left = remaining - eaten;
        return {eaten, left};
    }

private:
    int number;
    int need;
    int remaining;
};

namespace contest {
    std::vector<int> issame(std::vector<int> v1, std::vector<int> v2) {
        return v1 == v2;
    }
}

int main() {
    int number, need, remaining;
    std::cin >> number >> need >> remaining;

    eat e(number, need, remaining);
    std::vector<int> result = e.calculate();

    for (int val : result) {
        std::cout << val << " ";
    }

    return 0;
}