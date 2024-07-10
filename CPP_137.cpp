#include <string>
#include <algorithm>

using namespace std;

string compare_one(string a, string b) {
    if (!a.empty() && !b.empty()) {
        double num1 = stod(a);
        double num2 = stod(b);
        if (num1 > num2) return a;
        else if (num1 < num2) return b;
        else return "None";
    } else if (!a.empty()) return a;
    else if (!b.empty()) return b;
    return "None";
}