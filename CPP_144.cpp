#include <string>
#include <cassert>

bool checkEquality(string x, string n){
    int numX = stoi(x.substr(0, x.find("/")));
    int denX = stoi(x.substr(x.find("/") + 1));
    int numN = stoi(n.substr(0, n.find("/")));
    int denN = stoi(n.substr(n.find("/") + 1));
    
    double result = (numX * denN) / (denX * numN);
    
    return result == (int)result;
}

int main() {
    assert(checkEquality("1/5", "1/5") == false);
    
    return 0;
}