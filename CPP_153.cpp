#include <string>
#include <vector>

int main() {
    string class_name = "MyClass";
    vector<string> extensions = {"Java", "C++", "Python", "JS"};

    cout << Strongest_Extension(class_name, extensions) << endl;

}

int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;
    
    for(auto extension : extensions){
        int cap = 0, sm = 0;
        for(int i = 0; i < extension.length(); ++i){
            if(isupper(extension[i])) cap++;
            else if(islower(extension[i])) sm++;
        }
        int strength = cap - sm;
        
        if(strength > max_strength || (strength == max_strength && strongest_extension.empty())){
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    
    return class_name + "." + strongest_extension;
}