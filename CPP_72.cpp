``` 
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    vector<char> reversed;
    for (char c : str) {
        reversed.push_back(c);
    }
    reverse(reversed.begin(),reversed.end());
    string revStr(string(reversed.begin(),reversed.end()));
    
    if (string(reversed.begin(), reversed.end()) != revStr)
        return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}