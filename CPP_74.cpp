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
    // user input here
    std::vector<std::string> list1, list2;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(i < n/2) {
            list1.push_back(s);
        } else {
            list2.push_back(s);
        }
    }
    
    // calling total_match function
    if(issame(list1, list2)) {
        cout << "Lists are same";
    } else {
        cout << "Total match: ";
        vector<string> matched_list = total_match(list1, list2);
        for(const auto& s : matched_list) {
            cout << s << " ";
        }
        cout << endl;
    }
    
    return 0;
}