int is_bored(string S){
    int count = 0;
    string boredom = "I";
    size_t pos = 0;
    while ((pos = S.find('.', pos)) != string::npos || 
           (pos = S.find('?', pos)) != string::npos || 
           (pos = S.find('!', pos)) != string::npos) {
        string sentence = S.substr(0, pos);
        if (sentence.substr(0, boredom.size()).compare(boredom) == 0) {
            count++;
        }
        S.erase(0, pos + 1);
    }
    return count;
}