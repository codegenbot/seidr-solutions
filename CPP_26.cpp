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
    vector<int> numbers = {1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 9};
    vector<int> result = remove_duplicates(numbers);
    assert(result.size() == 6);
    assert(issame(result, vector<int>{1, 2, 3, 4, 6, 7}));
    return 0;
}