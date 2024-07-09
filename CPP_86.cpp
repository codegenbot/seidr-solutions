#include <algorithm>
#include <string>
using namespace std;

void process_string(string s);

string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += ' ';
        } else {
            char temp = s[i];
            while (temp != ' ') {
                temp = (temp >= 'a' && temp <= 'z') ? temp : ((temp >= 'A' && temp <= 'Z') ? (char)((temp - 1) + 'A') : (char)((temp - 1) + 'a'));
            }
            result += temp;
        }
    }
    return result;
}

int main() {
    string str = "Hello World";
    process_string(str);
    cout << anti_shuffle(str) << endl;
    return 0;
}