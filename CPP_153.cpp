#include <vector>
#include <string>
#include <cctype>

int main() {
    int Strongest_Extension(string class_name,vector<string> extensions){
        int max_strength = 0;
        string strongest_extension;
        for(auto extension : extensions){
            int cap = 0;
            int sm = 0;
            for(char c : extension){
                if(isupper(c))cap++;
                else if(islower(c))sm++;
            }
            int strength = cap - sm;
            if(strength > max_strength || (strength == max_strength && extension < strongest_extension)){
                max_strength = strength;
                strongest_extension = extension;
            }
        }
        return class_name + "." + strongest_extension;
    }

    string className = "MyClass";
    vector<string> extensions = {"Java", "Python", "C++", "Kotlin", "Swift"};

    cout << Strongest_Extension(className, extensions) << endl;

    return 0;
}