int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    bool simplify(string x, string n) {
        int num1 = stoi(x.substr(0, x.find("/")));
        int den1 = stoi(x.substr(x.find("/") + 1));
        int num2 = stoi(n.substr(0, n.find("/")));
        int den2 = stoi(n.substr(n.find("/") + 1));
        
        int num_result = num1 * num2;
        int den_result = den1 * den2;
        
        int divisor = gcd(num_result, den_result);
        
        return (den_result / divisor == 1);
    }