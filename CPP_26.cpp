```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    return a==b;
}

int main() {
    vector<int> numbers = {1,2,3,4,5};
    vector<int> result = remove_duplicates(numbers);
    for(int num : result) {
        std::cout << num << " ";
    }
    return 0;
}

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int num : numbers) {
        if(find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}