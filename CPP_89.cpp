#include <iostream>
#include <string>
using namespace std;

string encrypt(string s){
    string encrypted = "";
    for(char c : s){
        if(isalpha(c)){
            char base = islower(c) ? 'a' : 'A';
            encrypted += base + (c - base + 4) % 26;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}