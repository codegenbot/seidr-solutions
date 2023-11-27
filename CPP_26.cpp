#include <cassert>
#include <vector>
#include <algorithm>

using namespace std;

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
    vector<int> result = remove_duplicates({1, 2, 3, 2, 4, 3, 5});
    assert(result == vector<int>({1, 4, 5}));
    return 0;
}