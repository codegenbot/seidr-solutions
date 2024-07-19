#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = stoi(strtok((x.substr(1)).c_str(), "/"));
    int b = stoi(x.substr(0, 1));
    int c = stoi(strtok((n.substr(1)).c_str(), "/"));
    int d = stoi(n.substr(0, 1));

    if (a * d != b * c) {
        return false;
    }
    else {
        return true;
    }
}