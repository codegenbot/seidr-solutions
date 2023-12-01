#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

class ClassName {
public:
    std::vector<int> remove_duplicates(std::vector<int> numbers);
    bool issame(std::vector<int> a, std::vector<int> b);
};

std::vector<int> ClassName::remove_duplicates(std::vector<int> numbers){
    std::vector<int> result;
    for(int i = 0; i < numbers.size(); i++){
        if(std::count(numbers.begin(), numbers.end(), numbers[i]) == 1){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

bool ClassName::issame(std::vector<int> a, std::vector<int> b){
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main(){
    ClassName obj;
    std::cout << std::boolalpha << obj.issame(obj.remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}) << std::endl;
    return 0;
}