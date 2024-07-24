#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> rolling_max(vector<int> numbers);

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int max_val = INT_MIN;
    for(int i=0; i<numbers.size(); i++){
        max_val = std::max(max_val, numbers[i]);
        result.push_back(max_val);
    }
    return result;
}

int main(){
    std::vector<int> test = {3, 1, 5, 2, 4, 8, 3};
    std::vector<int> expected = {3, 3, 5, 5, 5, 8, 8};

    std::vector<int> output = rolling_max(test);

    if(issame(output, expected)){
        std::cout << "Test Passed" << std::endl;
    }
    else{
        std::cout << "Test Failed" << std::endl;
    }

    return 0;
}