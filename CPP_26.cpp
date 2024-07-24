#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int remove_duplicates(int numbers[], int n){
    std::vector<int> result;
    for(int num : numbers){
        if(find(result.begin(), result.end(), num) == result.end()){
            result.push_back(num);
        }
    }
    return 0;
}