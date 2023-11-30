int is_bored(string S) {
    int boredomCount = 0;
    string delimiter = ".?!";
    size_t pos = 0;
    string sentence;

    while ((pos = S.find_first_of(delimiter)) != string::npos) {
        sentence = S.substr(0, pos);
        S.erase(0, pos + 1);

        if (sentence.substr(0, 2) == "I ") {
            boredomCount++;
        }
    }

    if (S.substr(0, 2) == "I ") {
        boredomCount++;
    }

    return boredomCount;
}