```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = -1;
    string result;
    for(auto ext:extensions){
        int cap = 0, sm = 0;
        for(char c:ext){
            if(isupper(c)) cap++;
            else if(islower(c)) sm++;
        }
        int strength = cap - sm;
        if(strength > strongest){
            strongest = strength;
            result = ext;
        }else if(strength == strongest) result = ext;
    }
    return class_name + "." + result;
}

int main(){
    string class_name;
    vector<string> extensions;
    cout << "Enter the name of the class: ";
    cin >> class_name;
    cout << "Enter the list of extensions (separated by spaces): ";
    string temp;
    getline(cin,temp);
    size_t pos = 0;
    while((pos = temp.find(" ")) != string::npos){
        extensions.push_back(temp.substr(0,pos));
        temp.erase(0,pos+1);
    }
    extensions.push_back(temp);
    cout << "The strongest extension is: " << Strongest_Extension(class_name,extensions) << endl;
    return 0;
}