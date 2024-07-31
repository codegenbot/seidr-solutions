string words_in_sentence(string sentence){
    string result = "";
    int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}; // prime numbers up to 37
    int n = sentence.size();
    int start = 0;

    for(int i = 0; i <= n; ++i){
        if(i == n || sentence[i] == ' '){
            string word = sentence.substr(start, i - start);
            if(std::find(std::begin(prime), std::end(prime), word.size()) != std::end(prime)){
                result += word + " ";
            }
            start = i + 1;
        }
    }

    if(!result.empty()){
        result.pop_back(); // remove the trailing space
    }

    return result;
}