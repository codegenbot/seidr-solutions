```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);
vector<string> total_match(vector<string> lst1, vector<string> lst2);

int main() {
    int n;
    cin >> n;
    
    vector<string> lst1(n);
    for (auto &s : lst1) {
        cin >> s;
    }
    
    int m;
    cin >> m;
    
    vector<string> lst2(m);
    for (auto &s : lst2) {
        cin >> s;
    }

    vector<string> res = total_match(lst1, lst2);
    cout << "The winner is ";
    
    if(res.size() == 1)
    {
        cout << "lst" << (res[0].size()>res[0][0]=='L'?1:2) << endl;
    }
    else
    {
        cout << "Nobody" << endl;
    }

    return 0;

}

bool issame(vector<string> a, vector<string> b) {
    for (int i = 0; i < a.size() && i < b.size(); ++i) {
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

    if (issame(lst1, lst2)) {
        return lst1;
    } else if (sum1 < sum2) {
        return lst1;
    } else if (sum1 > sum2) {
        return lst2;
    } else {
        return lst1;
    }
}