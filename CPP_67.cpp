#include <string>
#include <sstream>

using namespace std;

int fruit_distribution(string s, int n) {
    int total_apples = 0;
    int total_oranges = 0;

    size_t pos = 0;
    while ((pos = s.find(" apples")) != string::npos) {
        int num_apples = stoi(s.substr(0, pos).erase(0, 5));
        total_apples += num_apples;
        s.erase(0, pos + 7);
    }

    pos = 0;
    while ((pos = s.find(" oranges")) != string::npos) {
        int num_oranges = stoi(s.substr(0, pos).erase(0, 8));
        total_oranges += num_oranges;
        s.erase(0, pos + 7);
    }

    return n - total_apples - total_oranges;
}