#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(int i=0; i<lst.size(); i++){
        if(lst[i] > 0 && lst[i] == (int)lst[i] && (int)lst[i] % 2 != 0){
            sum += (long long)pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {2.0f, 3.5f, 4.0f, 5.0f};
    long long odd_sum = 34;

    assert(double_the_difference(lst) == odd_sum);
    return 0;
}