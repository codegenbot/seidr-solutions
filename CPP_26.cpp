#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> remove_duplicates(vector<int> numbers);

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
    vector<int> numbers1 = {1, 2, 3, 4, 5};
    vector<int> expected1 = {1, 2, 3, 4, 5};
    assert(issame(remove_duplicates(numbers1), expected1));

    vector<int> numbers2 = {1, 2, 2, 3, 4, 5};
    vector<int> expected2 = {1, 3, 4, 5};
    assert(issame(remove_duplicates(numbers2), expected2));

    vector<int> numbers3 = {1, 1, 1, 1, 1};
    vector<int> expected3 = {};
    assert(issame(remove_duplicates(numbers3), expected3));

    return 0;
}