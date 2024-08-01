#include <vector>
#include <cassert> // include necessary headers

bool issame(std::vector<int> a, std::vector<int> b){ // declare and define issame function
    return a == b;
}

std::vector<int> pluck(std::vector<int> arr){ // move pluck function declaration before issame
    std::vector<int> result;
    int smallest_even = -1;
    int smallest_index = -1;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && (smallest_even == -1 || arr[i] < smallest_even)){
            smallest_even = arr[i];
            smallest_index = i;
        }
    }
    
    if(smallest_even != -1){
        result.push_back(smallest_even);
        result.push_back(smallest_index);
    }
    
    return result;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {})); // test the pluck function using assert
    return 0;
}