int is_bored(string S){
    int count = 0;
    string boredom = "I";
    size_t pos = 0;
    while((pos = S.find('.', pos)) != string::npos || (pos = S.find('?', pos)) != string::npos || (pos = S.find('!', pos)) != string::npos){
        if(S.substr(0, boredom.length()).compare(boredom) == 0)
            count++;
        pos += (S[pos] == '.' || S[pos] == '?' || S[pos] == '!');
    }
    return count;
}