```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> even_odd_count(int num) {
    int even_count = 0;
    int odd_count = 0;
    string str_num = to_string(abs(num));
    
    for(int i = 0; i < str_num.length(); i++) {
        int digit = str_num[i] - '0';
        if(digit % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    return {even_count, odd_count};
}

bool compare_vectors(vector<int> a, vector<int> b) {
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

int main() {
    vector<int> expected = {0, 1};
    vector<int> result = even_odd_count(0);
    
    if(compare_vectors(expected, result)) {
        cout << "Test case passed." << endl;
    } else {
        cout << "Test case failed." << endl;
    }
    
    return 0;
}
```