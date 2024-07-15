#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = stoi(split(x)[0]);
    int b = stoi(split(x)[2]);
    int c = stoi(split(n)[0]);
    int d = stoi(split(n)[2]);

    return (a * d == b * c);
}

string split(string s) {
    string result[3];
    size_t pos = 0;
    size_t prev = 0;
    while ((pos = s.find('/')) != string::npos) {
        result[1] = s.substr(prev, pos - prev);
        prev = pos + 1;
    }
    result[2] = s.substr(prev);
    return result[0] + "/" + result[2];
}