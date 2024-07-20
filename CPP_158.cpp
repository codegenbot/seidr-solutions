string find_max(vector<string> words){
    string res = words[0];
    for(int i=1;i<words.size();i++){
        if(count(res.begin(),res.end,res[i][0]) == 0){
            int count_unique=res.length();
            for(char c : res) {
                if (count(c-'a',string(),'a')>0)
                    count_unique--;
            }
            int count_unique_new=count(res.begin(),res.end,res[i][0]);
            for(char c : res[i]) {
                if (count(c-'a',string(),'a')>0)
                    count_unique_new--;
            }
            if(count_unique< count_unique_new){
                res=res[i];
            }else if(count_unique==count_unique_new&&res.compare(res[i]) > 0) {
                res=res[i];
            }
        }
    }
    return res;
}