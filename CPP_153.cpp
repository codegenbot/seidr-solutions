#include <iostream>
#include <vector>
#include <string>
#include <climits>

using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = "";
    int max_strength = INT_MIN;

    for (const string& ext : extensions) {
        int CAP = 0, SM = 0;
        for (char ch : ext) {
            if (isupper(ch)) CAP++;
            if (islower(ch)) SM++;
        }
        int strength = CAP - SM;
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    string class_name;
    int n;
    cin >> class_name >> n;
    vector<string> extensions(n);
    for(int i = 0; i < n; ++i) {
        cin >> extensions[i];
    }
    cout << Strongest_Extension(class_name, extensions) << endl;
    return 0;
}