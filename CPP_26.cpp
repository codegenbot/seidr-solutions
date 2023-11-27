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
    // Test the remove_duplicates() function
    vector<int> numbers = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    vector<int> expected = {5};
    vector<int> actual = remove_duplicates(numbers);
    assert(issame(actual, expected));

    return 0;
}