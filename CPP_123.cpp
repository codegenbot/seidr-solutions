#include <vector>
#include <iostream>

std::vector<int> get_odd_collatz(int num) {
    std::vector<int> sequence;
    while (num != 1) {
        if (num % 2 == 0)
            num = num / 2;
        else
            num = 3 * num + 1;
        sequence.push_back(num);
    }
    return sequence;
}

bool sequenceEqual(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;
}

int main() {
    int num;
    std::cin >> num;
    std::vector<int> result = get_odd_collatz(num);
    assert(sequenceEqual(result, {1}));  
}