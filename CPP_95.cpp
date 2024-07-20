Here is the completed code:

```cpp
bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for(auto& pair : dict) {
        string key = pair.first;
        for(char& c : key) {
            if(!isupper(c)) allUpper = false;
            if(!islower(c)) allLower = false;
            break; // we only need to check the first character
        }
    }

    return allLower || allUpper;
}