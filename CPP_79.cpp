#include <string>
using namespace std;

string decimal_to_binary(int decimal){
    string binary = "";
    while(decimal > 0){
        if(decimal % 2 == 0)
            binary += '0';
        else
            binary += '1';
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Binary representation of " << n << " is " << decimal_to_binary(n) << endl;
    return 0;
}