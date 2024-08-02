map<char,int> histogram(string test){
    map<char,int> result;
    if(test.empty()) return result;

    size_t pos = 0;
    char c;
    int count = 1;

    while((pos = test.find(' ')) != string::npos) {
        c = test[0];
        result[c] = count;
        test.erase(0, pos+1);
        if(!test.empty()) {
            count = 1;
            c = test[0];
        }
    }

    if(!test.empty()) {
        c = test[0];
        result[c] = count;
    }

    return result;
}