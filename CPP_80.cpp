```cpp
bool is_happy(string s){
    if(s.length() < 3) return false;
    for(int i = 0; i <= s.length()-3; i++){
        string sub = s.substr(i, 3);
        bool distinct = true;
        for(char c : sub){
            if(count(sub.begin(), sub.end(), c) > 1){
                distinct = false;
                break;
            }
        }
        if(!distinct) return false;
    }
    return true;
}