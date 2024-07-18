for(char &c : s){
        if(isalpha(c)){
            if(islower(c)){
                c = toupper(c);
            }
            else{
                c = tolower(c);
            }
        }
    }
    
    int left = 0, right = s.size() - 1;
    while(left < right){
        swap(s[left], s[right]);
        ++left;
        --right;
    }
    
    return s;
}