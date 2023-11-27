#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> remove_duplicates(vector<int> numbers);

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int i=0; i<numbers.size(); i++){
        if(count(numbers.begin(), numbers.end(), numbers[i]) == 1){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

int main() {
    // Test case 1
    vector<int> numbers1 = {1, 2, 3, 4, 5};
    vector<int> expected1 = {1, 2, 3, 4, 5};
    vector<int> output1 = remove_duplicates(numbers1);
    assert(issame(output1, expected1));

    // Test case 2
    vector<int> numbers2 = {1, 2, 2, 3, 4, 4, 5};
    vector<int> expected2 = {1, 3, 5};
    vector<int> output2 = remove_duplicates(numbers2);
    assert(issame(output2, expected2));

    // Test case 3
    vector<int> numbers3 = {1, 1, 1, 1, 1};
    vector<int> expected3 = {};
    vector<int> output3 = remove_duplicates(numbers3);
    assert(issame(output3, expected3));

    cout << "All test cases passed!" << endl;

    return 0;
}