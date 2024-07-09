#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) 
        return false;
    for (int i = 0; i < a.size(); i++) 
        if (a[i] != b[i]) 
            return false;
    return true;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const auto& str : lst1) {
        sum1 += str.length();
    }
    
    int sum2 = 0;
    for (const auto& str : lst2) {
        sum2 += str.length();
    }

    if (sum1 < sum2)
        return lst1;
    else if (sum1 > sum2)
        return lst2;

    vector<string> temp;
    for (const auto& str : lst1) {
        if (!issame(vector<string>(1, str), lst2)) 
            temp.push_back(str);
    }
    
    return temp;
}