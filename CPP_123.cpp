#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
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
    sequence.push_back(1); 
    return sequence;
}