#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    int largest_negative = 0, smallest_positive = 0;
    for (int num : lst) {
        if (num < 0 && num < largest_negative) {
            largest_negative = num;
        } else if (num > 0 && (num < smallest_positive || smallest_positive == 0)) {
            smallest_positive = num;
        }
    }
    return {largest_negative, smallest_positive};
}

int main() {
    std::vector<int> input1 = {1, 2, 3};
    std::vector<int> input2 = {1, 2, 3};
    
    if (issame(input1, input2)){
        std::cout << "Vectors are equal" << std::endl;
    }
    else {
        std::cout << "Vectors are not equal" << std::endl;
    }
    
    return 0;
}