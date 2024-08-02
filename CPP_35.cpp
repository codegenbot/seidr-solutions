#include <vector>
#include <algorithm>

int main() {
    std::vector<int> l; 
    int max;
    std::cout << "Enter numbers (separated by space): ";
    for(int i = 0; i < 5; i++) {
        int num;
        std::cin >> num;
        l.push_back(num);
    }
    max = *std::max_element(l.begin(), l.end());
    return max;
}