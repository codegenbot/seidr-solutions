string get_closest_vowel(string word){
    int n = word.size();
    for(int i=n-1; i>=0; i--){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
           word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U'){
            int left = i;
            while(left > 0 && (word[left-1] < 'a' || word[left-1] > 'z')) left--;
            if(left > 0){
                int right = i;
                while(right < n-1 && (word[right+1] < 'a' || word[right+1] > 'z')) right++;
                if(right >= left) return to_string(word[i]);
            }
        }
    }
    return "";
}