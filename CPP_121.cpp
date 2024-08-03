#include <iostream>
#include <vector>

int solutions(std::vector<int> lst) {
    int sum = 0;
    for(int i=1; i<lst.size(); i=i+2){
        if(lst[i]%2!=0) sum += lst[i];
    }
    return sum;
}

int main() {
    assert(solutions({3, 13, 2, 9}) == 16);
    std::cout << solutions({1, 3, 5, 7, 9, 11, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49}) << std::endl;
    return 0;
}