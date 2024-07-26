#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    stones.push_back(n);
    while (n % 2 == 0) {
        n += 2;
        stones.push_back(n);
    }
    return stones;
}

int solve_problem_cpp100() {
    int n;
    cin >> n;
    std::vector<int> result = make_a_pile(n);
    
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    
    return 0;
}

int main();