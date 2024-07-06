#include <string>
#include <sstream>

using namespace std;

int fruit_distribution(string s, int n) {
    int total_apples = 0;
    int total_oranges = 0;

    string number_str;
    for (char c : s) {
        if (c >= '0' && c <= '9') {
            number_str += c;
        } else if (!number_str.empty()) {
            if (c == 'a') {
                total_apples = stoi(number_str);
            } else if (c == 'o') {
                total_oranges = stoi(number_str);
            }
            number_str.clear();
        }
    }

    return n - total_apples - total_oranges;
}