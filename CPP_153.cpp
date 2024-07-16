#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
string Strongest_Extension(string class_name,vector<string> extensions){
    string strongest_extension = extensions[0];
    int max_strength = 0;
    for(const auto& ext : extensions){
        int cap_count = 0, sm_count = 0;
        for(const auto& ch : ext){
            if(isupper(ch)){
                cap_count++;
            } else if(islower(ch)){
                sm_count++;
            }
        }
        int strength = cap_count - sm_count;
        if(strength > max_strength || (strength == max_strength && ext < strongest_extension)){
            max_strength = strength;
            strongest_extension = ext;
        }
    }
    return class_name + "." + strongest_extension;
}