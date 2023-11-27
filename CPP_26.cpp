#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> remove_duplicates(vector<int> numbers);

bool issame(vector<int> a, vector<int> b);

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
    // Test the remove_duplicates() function
    vector<int> numbers = {1, 2, 3, 3, 4, 4, 5};
    vector<int> expected = {1, 2, 5};

    vector<int> result = remove_duplicates(numbers);

    assert(result == expected);

    return 0;
}