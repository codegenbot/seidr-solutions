int n = s.size();
    for(int i=0; i<n; i++) {
        if(isalpha(s[i])) {
            if(islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    int l=0, r=n-1;
    while(l<r) {
        swap(s[l], s[r]);
        l++;
        r--;
    }
    return s;
}