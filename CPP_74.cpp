```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const string& s : lst1) {
        sum1 += s.length();
    }
    
    int sum2 = 0;
    for (const string& s : lst2) {
        sum2 += s.length();
    }
    
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else {
        if(issame(lst1, lst2)) {
            return lst1;
        } else {
            int min_len = min(sum1, sum2);
            vector<string> result;
            for(string str : lst1) {
                if(str.length() <= min_len) {
                    result.push_back(str);
                }
            }
            for(string str : lst2) {
                if(str.length() <= min_len) {
                    result.push_back(str);
                }
            }
            return result;
        }
    }
}