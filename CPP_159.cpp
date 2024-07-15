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

bool issame(std::vector<int> vec1, std::vector<int> vec2) {
    return vec1 == vec2;
}