#include <string>
#include <sstream>

using namespace std;

int fruit_distribution(string s, int n) {
    int total_apples = 0;
    int total_oranges = 0;

    size_t pos = 0;
    while ((pos = s.find(" apples", pos)) != string::npos) {
        total_apples += stoi(s.substr(pos - std::stolto_string::distance(0, pos)).substr(0, s.find(" ") - 1));
        pos = s.find(" ", pos);
    }

    while ((pos = s.find(" oranges", pos)) != string::npos) {
        total_oranges += stoi(s.substr(pos - std::stolto_string::distance(0, pos)).substr(0, s.find(" ") - 1));
        pos = s.find(" ", pos);
    }

    return n - total_apples - total_oranges;
}