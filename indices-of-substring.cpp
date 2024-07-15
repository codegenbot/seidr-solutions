#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    int i = 0; 
    for (; i <= n - m; ) {
        if (text.find(target, i) != string::npos) {
            result.push_back(i);
            i += target.length(); // increment offset
        } else {
            break;
        }
    }

    return result;
}

int main() {
    vector<int> result = indicesOfSubstring("}{:'z*C.{=", "{");
    for (int i : result) {
        cout << i << endl;
    }
    return 0;
}