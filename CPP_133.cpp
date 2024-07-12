#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst){
    int total = 0;
    for(float x : lst){
        total += std::ceil(x)*std::ceil(x);
    }
    return total;

int main() {
    return 0;
}