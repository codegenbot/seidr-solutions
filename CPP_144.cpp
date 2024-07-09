int getXNumerator(string x);
    int getXDenominator(string x);
    int getNNumerator(string n);
    int getNDenominator(string n);
    int gcd(int a, int b);
    bool simplify(string x, string n) {
        int numeratorX = getXNumerator(x);
        int denominatorX = getXDenominator(x);
        int numeratorN = getNNumerator(n);
        int denominatorN = getNDenominator(n);

        int numeratorResult = numeratorX * numeratorN;
        int denominatorResult = denominatorX * denominatorN;

        return (denominatorResult % gcd(numeratorResult, denominatorResult) == 0);
    }

    int getXNumerator(string x) {
        return stoi(x.substr(0, x.find('/')));
    }

    int getXDenominator(string x) {
        return stoi(x.substr(x.find('/') + 1));
    }

    int getNNumerator(string n) {
        return stoi(n.substr(0, n.find('/')));
    }

    int getNDenominator(string n) {
        return stoi(n.substr(n.find('/') + 1));
    }

    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }