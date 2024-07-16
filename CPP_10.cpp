string make_palindrome(string str){
    if(str.empty()) return "";
    int n = str.size();
    int i = n-1;
    while(i>=0 && str[i] == str[n-1]) i--;
    string res = str;
    for(int j=i;j>=0;j--) res.push_back(str[j]);
    return res;
}