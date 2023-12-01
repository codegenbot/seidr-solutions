#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long double_the_difference(vector<float>& lst){
    long long sum = 0;
    for(int i=0; i<lst.size(); i++){
        if(lst[i] > 0 && lst[i] == floor(lst[i]) && (int)lst[i] % 2 != 0){
            sum += pow(lst[i], 2);
        }
    }
    return sum;
}

int main(){
    // Declare the lst vector containing the required values for testing
    vector<float> lst = {4.5, -1.5, 3.2, 2.0, 1.0};
    
    long long odd_sum = 0;
    for(int i=0; i<lst.size(); i++){
        if(lst[i] > 0 && lst[i] == floor(lst[i]) && (int)lst[i] % 2 != 0){
            odd_sum += pow(lst[i], 2);
        }
    }
    
    // Print the result and verify the output
    cout << (double_the_difference(lst) == odd_sum) << endl;
    
    return 0;
}