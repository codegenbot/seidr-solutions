#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return {eaten, left};
}

int main() {
    std::vector<int> result = eat(4, 5, 1);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    return 0;
}