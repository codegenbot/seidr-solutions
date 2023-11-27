#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> remove_duplicates(vector<int> numbers);

bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
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
    // Test case 1
    vector<int> numbers1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> expected1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> result1 = remove_duplicates(numbers1);
    assert(issame(result1, expected1));

    // Test case 2
    vector<int> numbers2 = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    vector<int> expected2 = {};
    vector<int> result2 = remove_duplicates(numbers2);
    assert(issame(result2, expected2));

    // Test case 3
    vector<int> numbers3 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> expected3 = {};
    vector<int> result3 = remove_duplicates(numbers3);
    assert(issame(result3, expected3));

    // Test case 4
    vector<int> numbers4 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> expected4 = {};
    vector<int> result4 = remove_duplicates(numbers4);
    assert(issame(result4, expected4));

    cout << "All test cases passed!" << endl;

    return 0;
}