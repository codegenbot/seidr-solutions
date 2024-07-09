#include <string>
#include <vector>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 1, c = 0, d = 1;
    
    // Convert strings to integers
    vector<string> partsX = split(x, '/');
    vector<string> partsN = split(n, '/');
    
    a = stoi(partsX[0]);
    b = stoi(partsX[1]);
    c = stoi(partsN[0]);
    d = stoi(partsN[1]);
    
    // Calculate the greatest common divisor
    int gcd = a * d;
    for (int i = 1; i <= min(a, d); i++) {
        if (a % i == 0 && d % i == 0) {
            gcd = i;
        }
    }
    
    // Simplify fractions
    int numerator = a / gcd * c / gcd;
    int denominator = b * d / gcd;
    
    // Check if the simplified fraction is an integer
    return numerator == denominator;
}

// Helper function to split a string by '/'
vector<string> split(string s, char delimiter) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = s.find(delimiter)) != string::npos) {
        result.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }
    result.push_back(s);
    return result;
}