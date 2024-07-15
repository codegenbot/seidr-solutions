int num = x;
string res = "";
while(num > 0){
    res = to_string(num % base) + res;
    num /= base;
}
return res.empty() ? "0" : res;
}