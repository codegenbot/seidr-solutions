#include <string>
#include <sstream>

using namespace std;

int fruit_distribution(string s, int n) {
    int totalApples = 0;
    int totalOranges = 0;

    size_t pos = 0;
    while ((pos = s.find(" apples")) != string::npos) {
        if (s.substr(0, pos).find_first_of("0123456789") != string::npos) {
            totalApples = stoi(s.substr(0, pos));
        }
        s.erase(0, pos + 8);
    }

    while ((pos = s.find(" oranges")) != string::npos) {
        if (s.substr(0, pos).find_first_of("0123456789") != string::npos) {
            totalOranges = stoi(s.substr(0, pos));
        }
        s.erase(0, pos + 8);
    }

    return n - totalApples - totalOranges;
}