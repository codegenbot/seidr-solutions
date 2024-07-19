#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool simplify(string x, string n) {
    int a = stoi(split(x)[0]);
    int b = stoi(split(x)[2]);
    int c = stoi(split(n)[0]);
    int d = stoi(split(n)[2]);

    long long lcm = (long long)a * d;
    long long commonDivisor = gcd(lcm, b);

    return a * d / commonDivisor == c * b / commonDivisor;
}

string split(string s) {
    vector<string> result;
    size_t index = 0;

    while ((size_t)index < s.length()) {
        size_t nextIndex = s.find('/', index);
        if (nextIndex != string::npos) {
            result.push_back(s.substr(index, nextIndex - index));
            index = nextIndex + 1;
        } else {
            result.push_back(s.substr(index));
            break;
        }
    }

    return result[0] + "/" + result[2];
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}