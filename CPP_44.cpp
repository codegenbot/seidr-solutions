string change_base(int x, int base){
    string result = "";
    while(x > 0){
        int rem = x % base;
        result.insert(0, to_string(rem));
        x = x / base;
    }
    return result;
}