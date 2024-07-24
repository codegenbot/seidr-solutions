#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(float num : lst){
        if(int(num) > 0 && int(num) == (int)num){
            sum += pow(int(num), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst; 
    int odd_sum = 0; 

    float num;
    cin >> num;
    while(num != -1.0f){
        if(int(num) > 0 && int(num) == (int)num){
            odd_sum += pow(int(num), 2);
        }
        cin >> num;
    }

    assert (double_the_difference(lst) == odd_sum ); 
    return 0;
}