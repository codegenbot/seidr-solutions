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
    std::vector<float> lst; // Declare the vector
    int odd_sum = 0; // Declare the integer

    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        float num;
        cin >> num;
        if(int(num) > 0 && int(num) == (int)num){
            odd_sum += pow(int(num), 2);
        }
        lst.push_back(num);
    }
    
    assert (double_the_difference(lst) == odd_sum ); // Use the declared variables
    return 0;
}