Here is the solution:

```cpp
bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for(auto &pair : dict) {
        string key = pair.first;
        if(!allLower && !allUpper) break;
        for(char &c : key) {
            if(toupper(c) != key[0]) {
                allLower = false;
                allUpper = false;
                break;
            }
        }
    }

    return (allLower || allUpper);
}