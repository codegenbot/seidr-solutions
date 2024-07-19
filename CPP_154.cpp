#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool cycpattern_check(string a, string b) {
    string temp = b + b;
    return (temp.find(a) != string::npos);
}

string a, b;
cin >> a >> b;
cout << cycpattern_check(a, b);
assert(cycpattern_check("winemtt", "tinem") == true);