#include <iostream>
#include <vector>

bool sameSequence(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> sequence;
    while(n > 1) {
        if(n % 2 != 0)
            sequence.push_back(n);
        if(n == 1)
            break;
        n = (n * 3 + 1);
    }
    return sequence;
}

int main() {
    int num;
    std::cin >> num;
    assert(sameSequence({get_odd_collatz(num)}, {num}));  
}