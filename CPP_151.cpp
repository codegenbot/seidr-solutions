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

    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        float num;
        cin >> num;
        lst.push_back(num);
        
        if(int(num) > 0 && int(num) == (int)num){
            odd_sum += int(num);
        }
    }
    
    assert (double_the_difference(lst) == odd_sum ); 
    return 0;
}