#include <vector> // Add this include statement for vector
#include <cassert> // Include for assert

bool issame(std::vector<int> a, std::vector<int> b){ // Fix the function signature
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i){
       if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> intersperse(std::vector<int> numbers, int delimeter){ // Fix the function signature
    std::vector<int> result;
    for(int i = 0; i < numbers.size(); ++i){
        result.push_back(numbers[i]);
        if(i != numbers.size() - 1){
            result.push_back(delimeter);
        }
    }
    return result;
}

int main(){
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2})); // Use correct assert format
    return 0;
}