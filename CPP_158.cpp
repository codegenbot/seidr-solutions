string find_max(vector<string> words){
    string result = *max_element(words.begin(),words.end(),
            [](const string& a,const string& b){
                return tie(a.size(),a) < tie(b.size(),b);
            });
    return result;
}