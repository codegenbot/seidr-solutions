#include <vector>
#include <string>
#include <iostream> 

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();
    int pos = 0; // position in the text

    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos);
        pos += 1; // skip the matched substring for next search
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