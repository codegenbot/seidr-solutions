#include<string>
using namespace std;

bool simplify(string x, string n) {
    int numerator1 = stoi(substring(x, 1, find('/', x)-1));
    int denominator1 = stoi(substring(x, find('/')+1));
    int numerator2 = stoi(substring(n, 1, find('/', n)-1));
    int denominator2 = stoi(substring(n, find('/')+1));

    return (double)numerator1 / denominator1 == (double)numerator2 / denominator2;
}

int main() {
    //test cases
    cout << simplify("1/5", "5/1") << endl;  //true
    cout << simplify("1/6", "2/1") << endl;  //false
    cout << simplify("7/10", "10/2") << endl; //false

    return 0;
}