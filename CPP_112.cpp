#include <vector>
#include <algorithm>
using namespace std;

vector<string> reverse(string s) {
    string temp = s;
    reverse(temp.begin(), temp.end());
    if (s == temp)
        return {"True"};
    else
        return {"False"};
}

vector<string> issame(string s, string c) {
    vector<char> v;
    for (char x : s) {
        bool flag = false;
        for (char y : c) {
            if (x == y) {
                flag = true;
                break;
            }
        }
        if (!flag)
            v.push_back(x);
    }
    string result = "";
    for (char x : v) {
        result += x;
    }
    
    string temp = result;
    reverse(temp.begin(), temp.end());
    if (result == temp) {
        return {result, "True"};
    } else {
        return {result, "False"};
    }
}

int main() {
    // Your code here
}