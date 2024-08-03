#include <vector>
#include <climits>
#include <cassert>

std::vector<int> pluck(std::vector<int> arr);

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> pluck(std::vector<int> arr){
    std::vector<int> result;
    int smallest_even = INT_MAX;
    int smallest_even_index = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            smallest_even_index = i;
        }
    }
    
    if (smallest_even_index != -1) {
        result.push_back(smallest_even);
        result.push_back(smallest_even_index);
    }
    
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(pluck({7, 9, 7, 1}), std::vector<int>{}));
    
    return 0;
}