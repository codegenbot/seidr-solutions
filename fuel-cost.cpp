#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    
    int n;
    while (std::cin >> n || !std::cin.eof()) {
        if (std::cin.fail()) {
            std::cin.clear();
            std::string junk;
            std::cin >> junk;
            continue;
        }
        nums.push_back(n);
    }

    int sum = 0;
    for (int num : nums) {
        sum += static_cast<int>(num / 3) - 2;
    }

    std::cout << sum << std::endl;

    return 0;
}