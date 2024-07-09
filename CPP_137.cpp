#include <string>
#include <algorithm>

using namespace std;

string compare_one(string a, string b) {
    float numA = stof(a);
    float numB = stof(b);

    if (numA > numB)
        return a;
    else if (numA < numB)
        return b;
    else
        return "None";
}