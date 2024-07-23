#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst){
    int total = 0;
    for(float num : lst){
        total += ceil(num) * ceil(num);
    }
    return total;

}

int main() {
    std::vector<float> lst = {-1,1,0};
    assert (sum_squares(lst)==2);
}