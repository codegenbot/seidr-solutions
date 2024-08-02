#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;

    for (const string& s : lst1) {
        int count1 = 0;
        count1 += s.size();
    }
    for (const string& s : lst2) {
        int count2 = 0;
        count2 += s.size();
    }

    if (count1 < count2) {
        return lst1;
    } else if (count1 > count2) {
        return lst2;
    } else {
        if (!issame(lst1, lst2)) { 
            return lst1; 
        }
        return result; 
    }
}