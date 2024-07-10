bool checkDivisibility(std::string x, std::string n) {
    if (x.find('/') == std::string::npos || n.find('/') == std::string::npos) {
        return true;
    }

    try {
        int den1 = std::stoi(x.substr(x.find('/') + 1));
        int den2 = std::stoi(n.substr(n.find('/') + 1));

        if (den1 == 0 || den2 == 0) {
            return false;
        }

        int num1 = std::stoi(x.substr(0, x.find('/')));
        int num2 = std::stoi(n.substr(0, n.find('/')));

        return (num1 * num2) % (den1 * den2) == 0;
    } catch (std::invalid_argument& e) {
        return false;
    }
}

bool simplify(std::string x, std::string n) {
    if (x.find('/') == std::string::npos || n.find('/') == std::string::npos) {
        return true;
    }

    try {
        int num1 = std::stoi(x.substr(0, x.find('/')));
        int den1 = std::stoi(x.substr(x.find('/') + 1));
        int num2 = std::stoi(n.substr(0, n.find('/')));
        int den2 = std::stoi(n.substr(n.find('/') + 1));

        if (den1 == 0 || den2 == 0) {
            return false;
        }

        int gcd = std::__gcd(num1 * den2, num2 * den1);
        if (gcd == 1) {
            gcd = customGcd(num1 * den2, num2 * den1);
        }

        num1 /= gcd;
        den1 /= gcd;

        return num1 == num2 && den1 == den2;
    } catch (std::invalid_argument& e) {
        return false;
    }
}