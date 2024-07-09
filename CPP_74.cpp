#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);
vector<string> total_match(vector<string> lst1, vector<string> lst2);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
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

    if (sum1 < sum2) {
        return lst1;
    } else if (sum1 > sum2) {
        return lst2;
    } else {
        vector<string> temp = lst1;
        for (const string& s : lst2) {
            temp.push_back(s);
        }
        return total_sort(temp);
    }
}

vector<string> total_sort(vector<string> a) {
    sort(a.begin(), a.end());
    return a;
}