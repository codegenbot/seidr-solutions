long long gcd(long long a, long long b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    bool simplify(string x, string n) {
        long long num1 = stoll(x.substr(0, x.find('/')));
        long long den1 = stoll(x.substr(x.find('/') + 1));
        long long num2 = stoll(n.substr(0, n.find('/')));
        long long den2 = stoll(n.substr(n.find('/') + 1));

        long long num = num1 * num2;
        long long den = den1 * den2;

        long long common = gcd(num, den);

        return (den / common == 1);
    }