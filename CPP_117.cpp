```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    // implement your comparison logic here
}

vector<string> select_words(string s, int n) {
    // implement your selection logic here
}

int main() {
    string s = "Mary had a little lamb";
    int n = 4;
    vector<string> res = select_words(s, n);
    for (string str : res) {
        cout << str << endl;
    }
    return 0;
}