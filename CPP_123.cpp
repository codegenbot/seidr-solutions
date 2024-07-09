```cpp
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

std::vector<int> get_odd_collatz(int num) {
    std::vector<int> sequence;
    while(num != 1) {
        if(num % 2 == 0)
            num = num / 2;
        else
            num = 3 * num + 1;
        sequence.push_back(num);
    }
    sequence.push_back(1); // add the last element to the sequence
    
    return sequence;
}

int main() {
    int num;
    std::cin >> num;
    std::vector<int> result = get_odd_collatz(num);
    for(int i : result)
        std::cout << i << " ";
    std::cout << std::endl;
    assert(sequenceEqual(get_odd_collatz(1), {1}));
    std::cout << "Hello World!" << std::endl;
    return 0;
}