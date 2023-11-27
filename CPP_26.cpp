#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> remove_duplicates(vector<int> numbers);

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

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
    vector<int> numbers{1, 2, 3, 4, 4, 5, 5, 6, 7, 8, 8, 9};
    vector<int> expected_result{1, 2, 3, 6, 7, 9};
    vector<int> actual_result = remove_duplicates(numbers);
    assert(issame(actual_result, expected_result));

    cout << "Test case passed!" << endl;
    return 0;
}