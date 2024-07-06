Here is the completed code:

```cpp
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string find_max(vector<string> words) {
    string max = words[0];
    int maxUnique = 0;
    
    for (const auto& word : words) {
        set<char> unique(word.begin(), word.end());
        if (unique.size() > maxUnique) {
            max = word;
            maxUnique = unique.size();
        }
    }
    
    return max;
}