```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6};
    vector<int> result = remove_duplicates(numbers);
    for (int num : result) {
        if (!issame({num}, vector<int>(result.begin(), find(result.begin(), result.end(), num) + 1))) {
            cout << "Duplicated number: " << num << endl;
        }
    }
    return 0;
}

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int num : numbers) {
        if(find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}