#include <vector>

namespace contest {
    class eat {
    private:
        int number;
        int need;
        int remaining;

    public:
        eat(int num, int n, int rem) : number(num), need(n), remaining(rem) {}

        std::vector<int> calculate() {
            int total = number + need;
            int eaten = total <= remaining ? total : remaining;
            int left = remaining - eaten;
            return {eaten, left};
        }
    };

    bool issame(std::vector<int> vec1, std::vector<int> vec2) {
        return vec1 == vec2;
    }
}

int main() {
    int num, need, rem;
    std::cin >> num >> need >> rem;
    contest::eat e(num, need, rem);
    std::vector<int> result = e.calculate();
    for (int ele : result) {
        std::cout << ele << " ";
    }
    return 0;
}