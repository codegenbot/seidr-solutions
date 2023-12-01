#include <vector>
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

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) == vector<int>{1, 4, 5});
    assert(remove_duplicates({1, 1, 1, 1, 1}) == vector<int>{});
    assert(remove_duplicates({1, 2, 3, 4, 5}) == vector<int>{1, 2, 3, 4, 5});
    assert(remove_duplicates({}) == vector<int>{});
    assert(remove_duplicates({1}) == vector<int>{1});
    return 0;
}