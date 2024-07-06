```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    return a==b;
}

int main(){
    assert (issame({1, 4, 5}, remove_duplicates({1, 2, 3, 2, 4, 3, 5})) );
    return 0;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> uniqueNumbers;
    for (int num : numbers) {
        if (find(uniqueNumbers.begin(), uniqueNumbers.end(), num) == uniqueNumbers.end()) {
            uniqueNumbers.push_back(num);
        }
    }
    return uniqueNumbers;
}