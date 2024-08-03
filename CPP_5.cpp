#include <vector>

bool issame(vector<int> a, vector<int> b){
    // Implementation of issame function
}

vector<int> intersperse(vector<int> numbers, int delimeter){
    vector<int> result;
    for(int i = 0; i < numbers.size(); i++){
        result.push_back(numbers[i]);
        if(i < numbers.size() - 1){
            result.push_back(delimeter);
        }
    }
    return result;
}

int main(){
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    // Additional test cases can be added here

    return 0;
}