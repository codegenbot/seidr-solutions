int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    bool simplify(string x, string n) {
        int num1 = stoi(x.substr(0, x.find("/")));
        int den1 = stoi(x.substr(x.find("/") + 1));
        int num2 = stoi(n.substr(0, n.find("/")));
        int den2 = stoi(n.substr(n.find("/") + 1));
        
        int num_res = num1 * num2;
        int den_res = den1 * den2;

        int common = gcd(num_res, den_res);
        
        return den_res / common == 1;
    }