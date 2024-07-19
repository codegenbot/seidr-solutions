int n = s.size();
    int start = 0, end = n - 1;
    while(start < end){
        if(isalpha(s[start]) && isalpha(s[end])){
            s[start] = islower(s[start]) ? toupper(s[start]) : tolower(s[start]);
            s[end] = islower(s[end]) ? toupper(s[end]) : tolower(s[end]);
        }
        else if(isalpha(s[start])){
            s[end] = islower(s[start]) ? toupper(s[start]) : tolower(s[start]);
        }
        else if(isalpha(s[end])){
            s[start] = islower(s[end]) ? toupper(s[end]) : tolower(s[end]);
        }
        start++;
        end--;
    }
    if(start == end && isalpha(s[start])){
        s[start] = islower(s[start]) ? toupper(s[start]) : tolower(s[start]);
    }
    else if(start > end){
        reverse(s.begin(), s.end());
    }
    return s;
}