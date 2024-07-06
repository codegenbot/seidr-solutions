Here is the completed code:

```cpp
#include <string>
#include <sstream>

using namespace std;

int fruit_distribution(string s, int n) {
    istringstream iss(s);
    string token;
    int apples = 0, oranges = 0;

    while (getline(iss, token, ' ')) {
        if (token.find("apples") != string::npos) {
            apples = stoi(token.substr(0, token.find("and")));
        }
        else if (token.find("oranges") != string::npos) {
            oranges = stoi(token.substr(0, token.find("and")));
        }
    }

    return n - apples - oranges;
}