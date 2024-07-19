#include <vector>

std::pair<int, int> solve(int number, int need, int remaining)
{
    int total = number + need;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return {eaten, left};
}

int main()
{
    int number, need, remaining;
    std::cin >> number >> need >> remaining;
    auto result = solve(number, need, remaining);
    std::cout << result.first << " " << result.second << std::endl;
    return 0;
}