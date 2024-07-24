string change_base(int x, int base){
    string new_base_num;
    while (x > 0){
        int remainder = x % base;
        new_base_num = to_string(remainder) + new_base_num;
        x = x / base;
    }
    return new_base_num.empty() ? "0" : new_base_num;
}