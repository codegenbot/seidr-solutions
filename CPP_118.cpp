string get_closest_vowel(string word) {
    int n = word.size();
    for(int i=n-1; i>0; --i){
        if(strchr("aeiouAEIOU",word[i]) != nullptr){
            int j=i-1;
            while(j>=0 && !strchr("aeiouAEIOU",word[j]))
                j--;
            return word.substr(j+1,i-j);
        }
    }
    return "";
}