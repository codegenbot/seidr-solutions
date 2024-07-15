#include <vector>

namespace Contest {
    class Eat {
    public:
        Eat(int number, int need, int remaining) : number(number), need(need), remaining(remaining) {}

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

    bool issame(std::vector<int> v1, std::vector<int> v2) {
        return v1 == v2;
    }
}