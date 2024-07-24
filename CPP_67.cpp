Here is the completed code:

```cpp
#include <string>
#include <sstream>

using namespace std;

int fruit_distribution(string s, int n) {
    istringstream iss(s);
    string token;
    int total_apples = 0, total_oranges = 0;

    while (getline(iss, token, ' ')) {
        if (token.find("apples") != string::npos) {
            total_apples = stoi(token.substr(0, token.find(" ")));
        } else if (token.find("oranges") != string::npos) {
            total_oranges = stoi(token.substr(0, token.find(" ")));
        }
    }

    return n - total_apples - total_oranges;
}