#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> remove_duplicates(vector<int> numbers);

bool issame(vector<int> a, vector<int> b){
    return a == b;
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
    // Test cases
    vector<int> numbers1 = {1, 2, 3, 4, 4, 5, 6, 6, 7};
    vector<int> expected1 = {1, 2, 3, 5, 7};
    vector<int> result1 = remove_duplicates(numbers1);
    assert(issame(expected1, result1));
    
    vector<int> numbers2 = {8, 8, 9, 9, 10, 10};
    vector<int> expected2 = {};
    vector<int> result2 = remove_duplicates(numbers2);
    assert(issame(expected2, result2));
    
    vector<int> numbers3 = {11, 12, 13};
    vector<int> expected3 = {11, 12, 13};
    vector<int> result3 = remove_duplicates(numbers3);
    assert(issame(expected3, result3));
    
    return 0;
}