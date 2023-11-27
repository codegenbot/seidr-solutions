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
    // Test cases
    vector<int> test1 = {1, 2, 3, 4, 5};
    vector<int> test2 = {1, 2, 2, 3, 4, 4, 5};
    vector<int> test3 = {1, 1, 1, 1, 1};

    vector<int> result1 = remove_duplicates(test1);
    vector<int> result2 = remove_duplicates(test2);
    vector<int> result3 = remove_duplicates(test3);

    assert(result1 == test1);
    assert(result2 == vector<int>({3, 5}));
    assert(result3.empty());

    return 0;
}