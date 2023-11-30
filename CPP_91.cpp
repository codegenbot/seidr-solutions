int is_bored(string S){
    int count = 0;
    string delimiter = ".?!";
    size_t pos = 0;
    while ((pos = S.find(delimiter)) != string::npos) {
        string sentence = S.substr(0, pos);
        if (sentence.length() > 2 && sentence.substr(0, 2) == "I ") {
            count++;
        }
        S.erase(0, pos + delimiter.length());
    }
    return count;
}