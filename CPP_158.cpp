Here is the solution:

```cpp
#include <algorithm>
#include <vector>

std::string find_max(vector<string> words){
    string max = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b){
            if(a.size() == b.size()) return a < b;
            return a.size() > b.size();
        });
    return max;
}