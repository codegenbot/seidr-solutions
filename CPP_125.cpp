vector<string> split_words(string txt) {
    vector<string> words;

    if(txt.find(' ') != string::npos || txt.find('\t') != string::npos) {
        istringstream iss(txt);
        copy(istream_iterator<string>(iss), istream_iterator<string>(), back_inserter(words));
    } else {
        int count = 0;
        for(int i = 0; i <= 'z'; i++) {
            if(i >= 'a' && (txt[i] == char(i))) {
                count++;
            }
        }
        words.push_back(to_string(count));
    }

    return words;
}