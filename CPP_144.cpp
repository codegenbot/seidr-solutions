#include <string>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

bool simplify(std::string x, std::string n) {
    int numX = std::stoi(x.substr(0, x.find('/')));
    int denX = std::stoi(x.substr(x.find('/') + 1));
    int numN = std::stoi(n.substr(0, n.find('/')));
    int denN = std::stoi(n.substr(n.find('/') + 1));

    int numResult = numX * numN;
    int denResult = denX * denN;

    int commonFactor = gcd(numResult, denResult);
    
    return denResult / commonFactor == 1;
}

int main() {
    assert(simplify("1/5", "1/5") == false);
    
    return 0;
}