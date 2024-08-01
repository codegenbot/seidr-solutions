#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 1, c = 0, d = 1;
    
    // Convert strings to integers
    vector<int> xy(2), yx(2);
    for (int i = 0; i < 2; i++) {
        if (x[i] == '/') break;
        xy[i] = x[i] - '0';
    }
    a = xy[0];
    b = xy[1];

    for (int i = 0; i < 2; i++) {
        if (n[i] == '/') break;
        yx[i] = n[i] - '0';
    }
    c = yx[0];
    d = yx[1];

    // Calculate the greatest common divisor
    int g = gcd(gcd(a, b), gcd(c, d));

    // Check if the simplified fraction is an integer
    return (long long)c / g == (long long)d / g;
}

// Function to calculate the greatest common divisor
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}