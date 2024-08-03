#include <string>
#include <algorithm>

using namespace std;

string compare_one(string a, string b) {
    if (a > b) {
        return a;
    } else if (b > a) {
        return b;
    }
    return "None";
}