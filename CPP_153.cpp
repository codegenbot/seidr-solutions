#include <iostream>
#include <string>
#include <vector>
using namespace std;

int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = -1;
    string strongest_extension;
    for(auto& extension:extensions){
        int cap = 0;
        int sm = 0;
        for(char c : extension){
            if(isupper(c))cap++;
            else sm++;
        }
        if(cap-sm > strongest){
            strongest = cap-sm;
            strongest_extension = extension;
        }
    }
    return class_name + "." + strongest_extension;
}