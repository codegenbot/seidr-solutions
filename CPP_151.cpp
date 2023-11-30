#include <vector>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(int i=0; i<lst.size(); i++){
        if(lst[i] > 0 && lst[i] == floor(lst[i]) && (int)lst[i] % 2 == 1){
            sum += lst[i] * lst[i];
        }
    }
    return sum;
}

int main(){
    std::vector<float> lst {1.5, 2.0, 3.5, 4.0};
    long long odd_sum =  double_the_difference(lst);
    assert (odd_sum == 17 );
    return 0;
}