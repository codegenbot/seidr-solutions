#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    string input;
    cout << "Enter a password: ";
    cin >> input;
    
    unsigned char md5[16];
    // include necessary headers and link your custom MD5 implementation here
    for (int i = 0; i < 16; ++i)
        md5[i] = 0x00;

    vector<string> result;
    for (int i = 0; i < 16; ++i)
        result.push_back(setw(2) << hex << setfill('0') << ((int)(md5[i])));

    cout << "MD5 Hash: ";
    for(string s : result){
        cout << s;
    }
    return 0;
}