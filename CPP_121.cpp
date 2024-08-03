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
    
    std::vector<int> lst = {1, 5, 6, 8};
    int result = solutions(lst);

    std::cout << "The sum of odd elements from the vector is: " << result << std::endl;

    return 0;
}