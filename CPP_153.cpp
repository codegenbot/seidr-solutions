#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int CAP(string s) { int cnt = 0; for (char c : s) if (isupper(c)) cnt++; return cnt; }
int SM(string s) { int cnt = 0; for (char c : s) if (islower(c)) cnt++; return cnt; }

string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = "";
    int max_strength = INT_MIN;

    for (string ext : extensions) {
        int strength = CAP(ext) - SM(ext);
        if (strength > max_strength || (strength == max_strength && ext < strongest_extension)) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }

    return class_name + "." + strongest_extension;
}