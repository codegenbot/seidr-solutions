#include <iostream>
#include <string>

int main() {
    string decimal_to_binary(int decimal){
        string binary = "";
        while(decimal > 0){
            if(decimal % 2 == 0)
                binary.insert(0,"0");
            else
                binary.insert(0,"1");
            decimal /= 2;
        }
        return "db" + binary + "db";
    }

    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    string result = decimal_to_binary(num);
    cout << "Binary representation: " << result << endl;

    return 0;
}