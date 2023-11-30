#include <vector>

int main(){
    std::vector<int> arr = {1, -2, 3, -4, 5};
    
    if(arr.empty()){
        return -32768;
    }
    
    int product = 1;
    int sum = 0;
    
    for(int i = 0; i < arr.size(); i++){
        sum += abs(arr[i]);
        if(arr[i] < 0){
            product *= -1;
        }
    }
    
    return sum * product;
}