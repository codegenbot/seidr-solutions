#include <iostream>
#include <vector>
#include <cassert> // Include the <cassert> header file

using namespace std;

vector<int> intersperse(vector<int> numbers, int delimiter){
    vector<int> result;
    for(int i = 0; i < numbers.size(); ++i){
        result.push_back(numbers[i]);
        if(i < numbers.size() - 1){
            result.push_back(delimiter);
        }
    }
    return result;
}

int main(){
    // Use assert from <cassert> to check if the function works as expected
    assert(intersperse({2, 2, 2}, 2) == vector<int>{2, 2, 2, 2, 2});
    
    return 0;
}