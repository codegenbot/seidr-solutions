#include <vector>
#include <climits>
#include <cassert>

std::vector<int> pluck(std::vector<int> arr){
    std::vector<int> result;
    int min_even = INT_MAX;
    int min_index = INT_MAX;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < min_even){
            min_even = arr[i];
            min_index = i;
        }
    }
    
    if(min_index != INT_MAX){
        result.push_back(min_even);
        result.push_back(min_index);
    }
    
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    std::vector<int> arr;
    int num;
    
    while(std::cin >> num){
        arr.push_back(num);
    }
    
    std::vector<int> result = pluck(arr);
    
    if(result.size() == 2){
        std::cout << result[0] << " " << result[1] << std::endl;
    }
    else{
        std::cout << "No even numbers found." << std::endl;
    }
    
    return 0;
}