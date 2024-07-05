```cpp
string change_base(int x, int base) {
    string res = "";
    while (x > 0) {
        int rem = x % base;
        if (rem >= 10)
            res = (char)(rem + 'A') + res; 
        else
            res = rem + '0' + res; 
        x /= base;
    }
    return res;
}