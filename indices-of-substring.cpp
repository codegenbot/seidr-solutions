```cpp
#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    int pos = 0;

    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos); 
        pos += m; // increment pos by the length of target
    }

    return result;
}

int main() {
    string text = "Hello world, Hello again";
    string target = "Hello";

    vector<int> result = indicesOfSubstring(text, target);

    cout << "Indices of substring '" << target << "' in text are: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}