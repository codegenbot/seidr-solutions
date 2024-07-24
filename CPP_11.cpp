#include <string>
using namespace std;

string string_xor(string a, string b) {
    string result;
    for(int i=0; i<a.length(); i++) {
        if(a[i] == '0' && b[i] == '0')
            result += '0';
        else if(a[i] == '1' && b[i] == '1')
            result += '0';
        else
            result += a[i];
    }
    return result;
}

int main() {
    assert(string_xor("0101", "0000") == "0101");
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    cout << "Resultant string after XOR operation is: " << string_xor(str1, str2) << endl;
    return 0;
}