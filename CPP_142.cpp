#include <iostream>
#include <vector>
#include <cmath>

int sum_squares(std::vector<int> lst) {
    int result = 0;
    for (int i = 0; i < lst.size(); i++) {
        if ((i+1) % 3 == 0 && (i+1) % 4 != 0)
            result += lst[i] * lst[i];
        else if ((i+1) % 4 == 0 && (i+1) % 3 != 0)
            result += pow(lst[i], 3);
    }
    return result;
}

int main() {
    std::vector<int> input = {-1, -3, 17, -1, -15, 13, -1, 14, -14, -12, -5, 
                             14, -14, 6, 13, 11, 16, 16, 4, 10};
    std::cout << sum_squares(input) << std::endl;
    return 0;
}