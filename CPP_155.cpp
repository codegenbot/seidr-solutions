vector<int> result = {0, 0}; 
    string number = to_string(abs(num));
    for(char digit : number){
        if((digit - '0') % 2 == 0)
            result[0]++;
        else
            result[1]++;
    }
    return result;
}