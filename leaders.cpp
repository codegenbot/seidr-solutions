#include <vector>
#include <iostream>
#include <string>
using namespace std;
/*

Given an hour in 24-hour format, convert it to 12-hour format.
1 <= hour < = 24
input:
11
output:
11 am
input:
12
output:
12 pm
For example,
input:
13
output:
1 pm
*/
string convert(int h) {
    string result;
    if(0 <= h && h <= 12) {
        result = to_string(h) + " am";
    } else if(13 <= h && h <= 24) {
        result = to_string(h-12) + " pm";
    } else {
        return "Error";
    }
    return result;
}
int main() {
    int h;
    cin >> h;
    cout << convert(h);
    cout << endl;
    return 0;
}
