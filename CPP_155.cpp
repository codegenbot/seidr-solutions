```cpp
#include <iostream>
#include <vector>

using namespace std;

vector<int> even_odd_count(int num){
    int even_count = 0;
    int odd_count = 0;
    string str_num = to_string(abs(num));
    
    for(int i = 0; i < str_num.length(); i++){
        int digit = str_num[i] - '0';
        if(digit % 2 == 0){
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    return vector<int>{even_count, odd_count};
}

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

int main(){
    assert (issame(even_odd_count(0), vector<int>{1, 0}));
    
    return 0;
}
```