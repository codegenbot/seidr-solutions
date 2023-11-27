#include <vector>
#include <algorithm>
#include <cassert>

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

bool issame(vector<int> a, vector<int> b){
    // implementation of the issame function
}

int main(){
    assert (issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    // other test cases...
    return 0;
}