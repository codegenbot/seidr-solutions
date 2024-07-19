for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            if(islower(s[i])){
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    int left = 0, right = s.length() - 1;
    while(left < right){
        swap(s[left], s[right]);
        left++;
        right--;
    }
    return s;
}