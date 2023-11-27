#include <vector>
#include <cmath>

long long int double_the_difference(vector<float> lst){
    long long int sum = 0;
    
    for(size_t i = 0; i < lst.size(); i++){
        if(lst[i] > 0 && lst[i] == (int)lst[i] && (int)lst[i] % 2 != 0){
            sum += pow(lst[i], 2);
        }
    }
    
    return sum;
}

int main() {
    vector<float> lst = {1.5, 2.5, 3.5};
    long long int odd_sum = 0;
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}