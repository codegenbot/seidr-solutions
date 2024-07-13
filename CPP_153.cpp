```cpp
#include <vector>
#include <string>

int main() {
    string class_name;
    vector<string> extensions;
    // read input from user
    cin >> class_name;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string extension;
        cin >> extension;
        extensions.push_back(extension);
    }
    
    int strongest = 0;
    string strongest_extension;
    for(auto extension : extensions){
        int cap = 0, sm = 0;
        for(char c : extension){
            if(isupper(c)) cap++;
            else if(islower(c)) sm++;
        }
        int strength = cap - sm;
        if(strength > strongest || (strength == strongest && extension < strongest_extension)){
            strongest = strength;
            strongest_extension = extension;
        }
    }
    
    cout << class_name + "." + strongest_extension << endl;
    
    return 0;
}