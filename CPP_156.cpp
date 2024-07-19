string int_to_mini_roman(int number){
    string result;
    vector<string> roman{"", "i", "ii", "iii", "iv", "v", "vi", "vii", "viii", "ix",
                         "x", "xx", "xxx", "xl", "l", "lx", "lxx", "lxxx", "xc",
                         "c", "cc", "ccc", "cd", "d", "dc", "dcc", "dccc", "cm",
                         "m", "mm"};
    
    result += roman[number / 1000 % 10 + 27];
    result += roman[number / 100 % 10 + 18];
    result += roman[number / 10 % 10 + 9];
    result += roman[number % 10];
    
    return result;
}