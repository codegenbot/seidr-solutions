int is_bored(string S) {
    int boredomCount = 0;
    // Split the string into sentences using delimiters '. ', '? ', and '! '
    size_t pos = 0;
    string delimiter = ".?!";
  
    while ((pos = S.find_first_of(delimiter, pos)) != string::npos) {
        string sentence = S.substr(0, pos);
        // Check if the sentence starts with "I"
        if (sentence.find_first_of("I ") == 0) {
            boredomCount++;
        }
        // Move the position to after the delimiter
        pos = pos + 2;
        S = S.substr(pos, S.length() - pos);
        pos = 0;
    }
  
    // Check the remaining part of the string as a sentence
    if (S.find_first_of("I ") == 0) {
        boredomCount++;
    }
  
    return boredomCount;
}