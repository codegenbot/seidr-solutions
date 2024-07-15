for(auto &word : s){
        if (word != ' ') {
            sort(word.begin(), word.end());
        }
    }
    return s;
}