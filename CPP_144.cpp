#include <string>
#include <sstream>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    stringstream s1(x), s2(n);
    string s1str, s2str;
    char ch;
    getline(s1, s1str, ' '); 
    s1 >> a >> ch >> b; 
    getline(s2, s2str, ' '); 
    s2 >> c >> ch >> d; 

    return (a*d == b*c);
}