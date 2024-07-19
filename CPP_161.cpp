for(char &c : s){
        if(isalpha(c)){
            if(islower(c)){
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }

    int n = s.length();
    if(n > 0){
        int i = 0, j = n - 1;
        while(i < j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }

    return s;
}