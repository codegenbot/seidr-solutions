```cpp
string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    string res = "";
    for(int i=shift % n; i<n; i++){
        res += str[i];
    }
    for(int i=0; i<shift % n; i++){
        res += str[i];
    }
    return res;
}