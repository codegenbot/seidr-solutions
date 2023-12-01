int vowels_count(string s){
    int count = 0;
    int size = s.size();

    for(int i = 0; i < size; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            count++;
        }
    }

    if(size > 0 && (s[size-1] == 'y' || s[size-1] == 'Y')){
        count--;
    }

    return count;
}