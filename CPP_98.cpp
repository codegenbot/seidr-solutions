Here is the completed code:

int count_upper(string s){
    int count = 0;
    for(int i=1; i<s.size(); i+=2) {
        string c = s.substr(i,1);
        if(c[0] >= 'A' && c[0] <= 'E'||c[0] >= 'I'&&c[0] <= 'O'||c[0] >= 'U') 
            count++;
    }
    return count;
}