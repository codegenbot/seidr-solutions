string num = "";
while(x > 0){
    int digit = x % base;
    num = to_string(digit) + num;
    x /= base;
}
return num;