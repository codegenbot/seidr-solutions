#include <string>
#include <cmath>

using namespace std;

bool simplify(string x, string n) {
    string numerator, denominator;
    size_t pos = x.find("/");
    numerator = x.substr(0, pos);
    denominator = x.substr(pos+1);

    pos = n.find("/");
    numerator = n.substr(0, pos);
    denominator = n.substr(pos+1);

    int a = stoi(numerator);
    int b = stoi(denominator);
    
    int c = stoi(x.substr(2,x.length()-3));
    int d = stoi(denominator);

    double res = (double)a*d/(double)b*c;

    return floor(res) == res;
}