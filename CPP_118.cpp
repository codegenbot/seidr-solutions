string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    for(int i=word.length()-1; i>=0; i--){
        if(vowels.find(word[i]) != string::npos){
            int left = 0, right = i;
            while(left <= right && word[left] != ' ' && !vowels.find(word[left])){
                left++;
            }
            while(right >= 0 && word[right] != ' ' && !vowels.find(word[right])){
                right--;
            }
            if(right-left+1 > 0){
                return word.substr(left, right-left+1).substr(0,1);
            }
        }
    }
    return "";
}