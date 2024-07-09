```
#include <vector>
#include <string>

bool issame(std::vector<std::string> s1, std::vector<std::string> s2) {
    if(s1.size() != s2.size()) return false;
    for(int i = 0; i < s1.size(); i++) {
        if(s1[i] != s2[i]) return false;
    }
    return true;
}

std::vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0, sum2 = 0;
    for (const auto& s : lst1) {
        sum1 += s.length();
    }
    for (const auto& s : lst2) {
        sum2 += s.length();
    }
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else return lst1;
}

int main() {
    vector<string> lst1, lst2;
    //input
    int n1, n2;
    cin >> n1 >> n2;
    for(int i = 0; i < n1; i++) {
        string s;
        cin >> s;
        lst1.push_back(s);
    }
    for(int i = 0; i < n2; i++) {
        string s;
        cin >> s;
        lst2.push_back(s);
    }
    
    //output
    if(issame(lst1, lst2)) {
        if (total_match(lst1, lst2) == lst1)
            cout << "List 1 has the maximum total character count." << endl;
        else
            cout << "List 2 has the maximum total character count." << endl;
    } else
        cout << "The lists are not same." << endl;

    return 0;
}