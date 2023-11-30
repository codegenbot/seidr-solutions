int digitSum(string s){
    int sum = 0;
    for(int i=0; i<s.length(); i++){
        if(isupper(s[i])){
            sum += int(s[i]);
        }
    }
    return sum;
}