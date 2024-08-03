```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int num : numbers) {
        if(find_if(result.begin(), result.end(), bind1st(ptr_fun(int_equal), num)) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    vector<int> result = remove_duplicates({1, 2, 3, 2, 4, 3, 5});
    assert (issame(vector<int>(result.begin(), result.end()), {1, 4, 5})
    );
    return 0;
}