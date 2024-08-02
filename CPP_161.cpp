```cpp
cpp_string solve(cpp_string s){
    cpp_string result = "";
    for(int i=0; i<s.size(); i++){
        if(isalpha(s[i])){
            if(islower(s[i]))
                result += toupper(s[i]);
            else
                result += tolower(s[i]);
        }
        else
            result += s[i];
    }
    return (result.empty()) ? cpp_string(1, s.back()).append(result) : result;
}