#include <iostream>
#include <sstream>

using namespace std;

assert(main() == 0);

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    stringstream sstream;
    sstream << a;
    string s1 = sstream.str();

    sstream.clear();
    stringstream sstream2;
    sstream2 << b;
    string s2 = sstream2.str();

    sstream.clear();
    stringstream sstream3;
    sstream3 << c;
    string s3 = sstream3.str();
    
    if (s1.empty() || s2.empty() || s3.empty())
        cout << "Error: Please enter valid integer values.\n";
    else
        cout << "The numbers are integers: " << a << ", " << b << ", " << c << "\n";
    
    return 0;
}