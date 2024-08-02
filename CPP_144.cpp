bool simplify(string x, string n) {
    int a = 0, b = 1, c = 0, d = 1;
    int num = 0, denom = 0;

    // Convert fractions to integers
    int i = 0;
    while (i < x.length()) {
        if (x[i] == '/') break;
        if (isdigit(x[i])) a = a * 10 + (x[i] - '0');
        i++;
    }
    i = 0;
    while (i < x.length() && x[i] != '/') i++;
    i++;
    while (i < x.length()) {
        if (isdigit(x[i])) b = b * 10 + (x[i] - '0');
        i++;
    }

    i = 0;
    while (i < n.length()) {
        if (n[i] == '/') break;
        if (isdigit(n[i])) c = c * 10 + (n[i] - '0');
        i++;
    }
    i = 0;
    while (i < n.length() && n[i] != '/') i++;
    i++;
    while (i < n.length()) {
        if (isdigit(n[i])) d = d * 10 + (n[i] - '0');
        i++;
    }

    // Calculate the greatest common divisor
    int g = gcd(abs(a*d), abs(b*c));

    // Check if the result is a whole number
    return ((a/d) == (c/g));

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