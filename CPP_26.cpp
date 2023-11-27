#include <vector>
#include <algorithm>
#include <cassert>

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
    if(a.size() != b.size()){
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 2, 3, 4, 5};
    vector<int> expected = {1, 5};
    vector<int> result = remove_duplicates(numbers);
    assert(issame(expected, result));
    return 0;
}