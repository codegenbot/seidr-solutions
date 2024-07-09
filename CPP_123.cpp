#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    if (a > b)
        return false;
    else 
        return true;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) {
            result.push_back(n);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    int input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    
    std::vector<int> output = get_odd_collatz(input);
    
    for (auto i : output) {
        if (issame(i, 1)) {
            break;
        }
        else 
            std::cout << i << " ";
    }
    return 0;
}