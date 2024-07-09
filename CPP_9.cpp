#include <vector>
#include <climits>

std::vector<int> rolling_max(std::vector<int> numbers){
    std::vector<int> result;
    int max_val = INT_MIN;
    for(int i=0; i<numbers.size(); i++){
        max_val = std::max(max_val, numbers[i]);
        result.push_back(max_val);
    }
    return result;
}

int main(){
    // Sample calling code
    std::vector<int> input = {1, 3, 5, 2, 7, 1};
    std::vector<int> result = rolling_max(input);
    return 0;
}