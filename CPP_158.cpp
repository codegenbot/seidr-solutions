string find_max(vector<string> words){
    string res = words[0];
    for(int i=1;i<words.size();i++){
        if(unique(words[i].begin(),words[i].end())-words[i].begin()>=unique(res.begin(),res.end())-res.begin()){
            res = words[i];
        }
        else if((unique(words[i].begin(),words[i].end())-words[i].begin()==(unique(res.begin(),res.end())-res.begin()))&&(words[i]<res)){
            res = words[i];
        }
    }
    return res;
}