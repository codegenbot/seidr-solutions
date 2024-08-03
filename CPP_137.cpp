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

string compare_one(float a, int b) {
    if (a > b) {
        return to_string(a);
    } else if (b > a) {
        return to_string(b);
    }
    return "None";
}

string compare_one(int a, float b) {
    if (a > b) {
        return to_string(a);
    } else if (b > a) {
        return to_string(b);
    }
    return "None";
}