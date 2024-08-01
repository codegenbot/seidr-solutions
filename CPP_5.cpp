#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){ // Correct the function signature
    // Function implementation goes here
}

std::vector<int> intersperse(std::vector<int> numbers, int delimeter); // Declare the function before using it

std::vector<int> intersperse(std::vector<int> numbers, int delimeter){
    std::vector<int> result;
    for(int i=0; i<numbers.size(); i++){
        result.push_back(numbers[i]);
        if(i < numbers.size()-1){
            result.push_back(delimeter);
        }
    }
    return result;
}
  
int main(){
    // Function call and assert statements go here
}