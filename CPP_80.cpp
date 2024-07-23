string t = to_string(total);
while(t != "1") {
    int total = 0;
    for(char c : t) 
        total += (c-'0')*(c-'0');
    t = to_string(total);
}