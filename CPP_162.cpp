#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "md5.h"

using namespace std;

int main() {
    string input;
    cout << "Enter a password: ";
    cin >> input;
    
    unsigned char md5[16];
    MD5(input, md5);

    vector<string> result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i)
        result.push_back(setw(2) << hex << setfill('0') << ((int)(md5[i])));

    cout << "MD5 Hash: ";
    for(string s : result){
        cout << s;
    }
    return 0;
}