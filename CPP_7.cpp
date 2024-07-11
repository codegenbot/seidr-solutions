```cpp
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(), b.end(), a[i]) == b.end())
            return false;
    }
    
    return true;
}

int main() {
    vector<string> filter_by_substring(vector<vector<string>>& list) {
        vector<string> result;
        
        for (const auto& sublists : list) {
            bool isSublistPresent = false;
            
            for (const auto& sublist : sublists) {
                bool found = true;
                
                for (const auto& element : sublist) {
                    if (!find(result.begin(), result.end(), element) != result.end())
                        found = false;
                        break;
                }
                
                if (found)
                    isSublistPresent = true;
                else
                    break;
            }
            
            if (isSublistPresent)
                result.insert(result.end(), sublists.begin(), sublists.end());
        }
        
        return result;
    }

    vector<vector<string>> list{{"abc", "def"}, {"def", "ghi"}};
    
    // The actual implementation of filter_by_substring function
    auto output = filter_by_substring({list});
    
    for (const auto& sublist : output) {
        bool same = issame(sublist, {"abc", "def"});
        
        if (same)
            cout << "The strings in the list are the same." << endl;
        else
            cout << "The strings in the list are not the same." << endl;
    }
    
    return 0;
}