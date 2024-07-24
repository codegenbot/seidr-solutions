#include <vector>
#include <cassert>

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    if(numbers.empty()) return result;

    int max_so_far = numbers[0];
    result.push_back(max_so_far);

    for(int i = 1; i < numbers.size(); ++i){
        max_so_far = max(max_so_far, numbers[i]);
        result.push_back(max_so_far);
    }

    return result;
}

int main(){
    assert(rolling_max({3, 2, 3, 100, 3}) == vector<int>{3, 3, 3, 100, 100});
    
    return 0;
}