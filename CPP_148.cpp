#include <vector>
#include <string>
#include <algorithm>
using namespace std;

std::vector<std::string> bf(std::string a, std::string second) {
    int j = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == 'B' || a[i] == 'b') {
            a.insert(i++, "first");
        }
        else if (a[i] == 'F' || a[i] == 'f') {
            a.replace(i, 1, "first");
        }
    }
    for (int i = 0; i < second.length(); i++) {
        if (second[i] == 'B' || second[i] == 'b') {
            second.insert(i++, "second");
        }
        else if (second[i] == 'F' || second[i] == 'f') {
            second.replace(i, 1, "second");
        }
    }
    return {a, second};
}

bool issame(vector<string> a, vector<string> second){
    for (int i = 0; i < a.size(); i++) {
        if (find(second.begin(),second.end(),a[i]) == second.end()) {
            return false;
        }
    }
    return true;
}