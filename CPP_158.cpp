string find_max(vector<string> words){
    string maxWord = words[0]; // Assume the first word has the maximum unique characters
    int maxUniqueChars = countUniqueChars(words[0]); // Count the unique characters in the first word

    for(int i = 1; i < words.size(); i++){
        int uniqueChars = countUniqueChars(words[i]); // Count the unique characters in the current word

        if(uniqueChars > maxUniqueChars){ // If current word has more unique characters
            maxWord = words[i]; // Update the maxWord
            maxUniqueChars = uniqueChars; // Update the maxUniqueChars
        }
        else if(uniqueChars == maxUniqueChars && words[i] < maxWord){ // If current word also has maximum unique characters but comes before in lexicographical order
            maxWord = words[i]; // Update the maxWord
        }
    }

    return maxWord;
}