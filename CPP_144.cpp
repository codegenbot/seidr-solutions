#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 1, c = 0, d = 1;
    
    // convert string to integer
    size_t pos = x.find('/');
    if (pos != string::npos) {
        a = stoi(x.substr(0, pos));
        b = stoi(x.substr(pos+1));
    }
    
    pos = n.find('/');
    if (pos != string::npos) {
        c = stoi(n.substr(0, pos));
        d = stoi(n.substr(pos+1));
    }

    // check if x * n is a whole number
    long long res = (long long)a*c + (long long)b*d;
    long long gcd = __gcd(b*d, abs(res));
    
    return res / gcd == 0;
}

int main() {
    cout << simplify("1/5", "5/1"); // prints: 1
    cout << simplify("1/6", "2/1"); // prints: 0
    cout << simplify("7/10", "10/2"); // prints: 0
}