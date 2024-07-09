#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    int sum = 0;
    int product = 1;
    for (int num : a) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}