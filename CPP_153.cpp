```cpp
int Strongest_Extension(string class_name, vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;

    for(auto extension : extensions){
        int length = extension.length();
        if(length > max_strength || (length == max_strength && extension.compare(0, length, strongest_extension) < 0)){
            max_strength = length;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}