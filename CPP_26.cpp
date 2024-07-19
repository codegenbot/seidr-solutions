```
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for(int num : numbers){
        if(find(result.begin(), result.end(), num) == result.end()){
            result.push_back(num);
        }
    }
    return result;

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 4};
    vector<int> c = {1, 2, 3};

    if(issame(a, b)) {
        cout << "Vectors a and b are the same." << endl;
    } else {
        cout << "Vectors a and b are not the same." << endl;
    }

    vector<int> d = remove_duplicates({1, 2, 2, 3, 4});
    for(int num : d) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}