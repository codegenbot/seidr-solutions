```cpp
#include <vector>
#include <string>
#include <iostream> 

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int pos = 0; // initialize position to 0

    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos);
        pos += target.length(); // skip the matched substring for next search
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