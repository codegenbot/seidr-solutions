#include <vector>

int prod_signs(vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    int sign = 1;
    int product = 1;
    int sum = 0;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > 0){
            sign *= 1;
        }
        else if(arr[i] < 0){
            sign *= -1;
        }
        sum += abs(arr[i]);
    }
    
    return sign * sum * product;
}

int main() {
    return 0;
}