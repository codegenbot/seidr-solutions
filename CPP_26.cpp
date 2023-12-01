#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int i = 0; i < numbers.size(); i++){
        if(count(numbers.begin(), numbers.end(), numbers[i]) == 1){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

int main(){
    vector<int> input = {1, 2, 3, 2, 4, 3, 5};
    vector<int> output = remove_duplicates(input);
    for(int num : output){
        cout << num << " ";
    }
    
    return 0;
}