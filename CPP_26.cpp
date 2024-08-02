```cpp
#include<vector>
#include<algorithm>

bool issame(std::vector<int> a,std::vector<int> b){
    return a==b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::vector<int> result;
    for(int num : numbers) {
        bool found = false;
        for(int i : result) {
            if(i == num) {
                found = true;
                break;
            }
        }
        if(!found) {
            result.push_back(num);
        }
    }
    return result;
}

int main(){
    std::vector<int> numbers = {1,2,3,4,5,6};
    std::cout << "Original: ";
    for(int num : numbers){
        std::cout << num << " ";
    } 
    std::cout << "\n";
    std::vector<int> result = remove_duplicates(numbers);
    std::cout << "After removing duplicates: ";
    for(int num : result) {
        std::cout << num << " ";
    }
    return 0;
}