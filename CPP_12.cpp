#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longest(vector<string> strings){
    if(strings.empty()){
        return "None";
    }

    string longestStr = strings[0];
    for(const string& str : strings){
        if(str.length() > longestStr.length() || (str.length() == longestStr.length() && str < longestStr)){
            longestStr = str;
        }
    }

    return longestStr;
}

void solve() {
    int n;
    cin >> n;
    vector<string> strings(n);
    for(int i = 0; i < n; ++i){
        cin >> strings[i];
    }

    cout << longest(strings) << endl;
}

int main() {
    solve();
    return 0;
}