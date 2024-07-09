#include <vector>
#include <iostream>

std::vector<int> get_odd_collatz(int num) {
    if (num % 2 != 0)
        return {1};
    else if (num == 1)
        return {};
    
    int temp = num;
    std::vector<int> sequence;
    while (temp > 1) {
        if (temp % 2 != 0)
            sequence.push_back(temp);
        temp /= 2;
    }
    sequence.push_back(1);
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