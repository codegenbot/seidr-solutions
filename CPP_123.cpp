#include <iostream>
#include <vector>

bool sequenceEqual(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;
}

void get_odd_collatz(int num, std::vector<int>& sequence) {
    while (num > 1) {
        if (num % 2 != 0) {
            sequence.push_back(num);
            num = (3 * num + 1);
        } else {
            num /= 2;
        }
    }
}

int main() {
    int num;
    std::cin >> num;
    std::vector<int> sequence;
    get_odd_collatz(num, sequence);
    assert(sequenceEqual(get_odd_collatz(1), {1}));
    std::cout << "Hello World!" << std::endl; 
    return 0; 
}