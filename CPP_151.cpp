#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(auto num : lst){
        if(int(num) > 0 && int(num) == int(num)){
            sum += pow(int(num), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst; 
    float num;
    while(std::cin >> num){
        lst.push_back(num);
    }
    assert (double_the_difference(lst) == 0 );
    return 0;
}