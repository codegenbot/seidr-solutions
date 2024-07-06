#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool issame(vector<vector<char>> a, vector<vector<char>> b) {
    if (a.size() != b.size()) return false;
    sort(a.begin(), a.end(), [](const auto& x, const auto& y){return string(string(x.begin(), x.end()), " ").compare(string(string(y.begin(), y.end()), " ")) < 0;});
    sort(b.begin(), b.end(), [](const auto& x, const auto& y){return string(string(x.begin(), x.end()), " ").compare(string(string(y.begin(), y.end()), " ")) < 0;});
    for(auto str1 : a) {
        bool found = false;
        for(auto str2 : b) {
            if(string(string(str1.begin(), str1.end()), " ") == string(string(str2.begin(), str2.end()), " ")) {
                found = true;
                break;
            }
        }
        if(!found) return false;
    }
    return true;
}

vector<string> total_match(vector<vector<char>> lst1, vector<vector<char>> lst2) {
    int sum1 = 0;
    for (const auto& str : lst1) {
        sum1 += string(str.begin(), str.end()).length();
    }
    
    int sum2 = 0;
    for (const auto& str : lst2) {
        sum2 += string(str.begin(), str.end()).length();
    }
    
    if (sum1 < sum2) {
        return vector<string>(lst2.begin(), lst2.end());
    } else if (sum1 > sum2) {
        return vector<string>(lst1.begin(), lst1.end());
    } else {
        if(issame(vector<vector<char>>(lst1.begin(), lst1.end()), vector<vector<char>>(lst2.begin(), lst2.end())))
            return vector<string>(lst1.begin(), lst1.end());
        else
            return vector<string>(lst2.begin(), lst2.end()); 
    }
}

vector<string> testMain() {
    vector<vector<char>> vec1 = {{'t'}, {'h'}, {'i'}, {'s'}};
    vector<vector<char>> vec2 = {{"", "", ""}};
    vector<string> result = total_match(vec1,vec2);
    return result;
}