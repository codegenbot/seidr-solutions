#include <string>
#include <sstream>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 1, c = 0, d = 1;
    stringstream s1(x), s2(n);
    
    std::string num_str;
    s1 >> num_str;
    size_t pos = num_str.find('/');
    if (pos == string::npos) {
        return false;
    }
    a = stoi(num_str.substr(0, pos));
    b = stoi(num_str.substr(pos + 1));

    string n_str;
    if (!(s2 >> c) || !(getline(s2, n_str, '/') && s2 >> d)) {
        return false;
    }
    
    return (a*d == b*c);
}