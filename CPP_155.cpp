```cpp
#include <iostream>
#include <vector>
#include <cassert>

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
    
    return {even_count, odd_count};
}

int main(){
    assert (issame(even_odd_count(0), {1, 0}));
    
    return 0;
}
```