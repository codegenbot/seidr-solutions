string find_max(vector<string> words){
    string res = words[0];
    for(int i=1; i<words.size(); i++){
        int count_res = 0;
        for(char c : res) {
            bool flag = false;
            for(char d : words[i]) {
                if(c == d) {
                    flag = true;
                    break;
                }
            }
            if(!flag)
                count_res++;
        }
        int count_word = 0;
        for(char c : words[i]) {
            bool flag = false;
            for(char d : res) {
                if(c == d) {
                    flag = true;
                    break;
                }
            }
            if(!flag)
                count_word++;
        }
        if(count_word > count_res || (count_word == count_res && words[i] < res)) {
            res = words[i];
        }
    }
    return res;
}