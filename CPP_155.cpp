```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<size_t> even_odd_count(int num){
    size_t even_count = 0;
    size_t odd_count = 0;
    string str_num = to_string(abs(num));

    for(size_t i = 0; i < str_num.length(); i++){
        int digit = str_num[i] - '0';
        if(digit % 2 == 0){
            even_count++;
        } else {
            odd_count++;
        }
    }

    return vector<size_t>{even_count, odd_count};
}

bool compare_vectors(vector<size_t> a, vector<size_t> b){
    if(a.size() != b.size()){
        return false;
    }

    for(size_t i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }

    return true;
}

int main(){
    vector<size_t> expected = {0, 1};
    vector<size_t> result = even_odd_count(0);

    if(compare_vectors(expected, result)){
        cout << "Test case passed." << endl;
    } else {
        cout << "Test case failed." << endl;
    }

    return 0;
}
```