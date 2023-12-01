#include <string>

using namespace std;

string generateString(int n) {
    string result = "";
    for(int i = 0; i <= n; i++) {
        result += to_string(i) + " ";
    }
    return result;
}