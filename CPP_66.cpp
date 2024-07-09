int digitSum(string s){
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        if(toupper(s[i]) >= 'A' && toupper(s[i]) <= 'Z'){
            sum += tolower(s[i]);
        }
    }
    return sum;
}