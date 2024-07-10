```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a,vector<string>b){
    return (a == b);
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    vector<string> result = by_length(arr);

    for(string s : result) {
        std::cout << s << " ";
    }
    
    if(issame(result, {"One", "Two", "Three", "Four", "Five"})) {
        std::cout << "\nTest passed.\n";
    } else {
        std::cout << "\nTest failed.\n";
    }

    return 0;
}