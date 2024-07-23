#include <iostream>
bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

std::pair<int, int> calculate(int number, int need, int remaining) {
    int total = number + need;
    int left = total - 1000;
    if (left < 0) {
        left = 0;
    }
    if (left > remaining) {
        left = remaining;
    }
    return {number + need, left};
}

int main() {
    int n, ne, re;
    std::cout << "Enter number: ";
    std::cin >> n;
    std::cout << "Enter need: ";
    std::cin >> ne;
    std::cout << "Enter remaining: ";
    std::cin >> re;

    std::pair<int, int> result = calculate(n, ne, re);

    std::cout << "Result 1: " << result.first << std::endl;
    std::cout << "Result 2: " << result.second << std::endl;

    return 0;
}