#include <vector>
#include <algorithm>
using namespace std;

bool isSame(vector<string> v1, vector<string> v2) {
    if(v1.size() != v2.size()) return false;
    for(auto str : v1) {
        auto it = find(v2.begin(), v2.end(), str);
        if(it == v2.end()) return false;
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end(), 
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    return result;
}

int main() {
    vector<string> v1 = {"apple", "banana", "orange"};
    vector<string> v2 = {"banana", "apple", "orange"};
    
    if(isSame(v1, v2)) {
        vector<string> v3 = sorted_list_sum(v1);
        for(auto str : v3) {
            cout << str << endl;
        }
    } else {
        cout << "Lists are not the same!" << endl;
    }
    return 0;
}