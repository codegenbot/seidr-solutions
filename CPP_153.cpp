#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
string Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = -10000;
    string strongest_extension;
    for(auto ext : extensions){
        int CAP = 0, SM = 0;
        for(auto ch : ext){
            if(isupper(ch)) CAP++;
            if(islower(ch)) SM++;
        }
        int strength = CAP - SM;
        if(strength > max_strength){
            max_strength = strength;
            strongest_extension = ext;
        }
    }
    return class_name + "." + strongest_extension;
}