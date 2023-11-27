#include <vector>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && lst[i] == (int)lst[i] && (int)lst[i] % 2 == 1) {
            sum += lst[i] * lst[i];
        }
    }
    
    return sum;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    long long odd_sum = 10;
    
    assert (double_the_difference(lst) == odd_sum);
    
    return 0;
}