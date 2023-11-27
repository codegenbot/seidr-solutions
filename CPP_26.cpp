#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
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

int main(int argc, char* argv[]) {
    vector<int> expected_result = {1, 4, 5};
    vector<int> numbers = {1, 2, 3, 2, 4, 3, 5};

    vector<int> result = remove_duplicates(numbers);
    assert(result == expected_result);

    cout << "Test passed!" << endl;
    return 0;
}