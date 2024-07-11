int digitSum(string s){
    int sum = 0;
    for(char ch : s){
        if(isupper(ch)){
            sum += ch;
        }
    }
    return sum;
}