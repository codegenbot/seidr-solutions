#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string string_sequence(int n) {
    ostringstream oss;
    for (int i = 1; i <= n; ++i) {
        oss << i << " ";
    }
    return oss.str();
}