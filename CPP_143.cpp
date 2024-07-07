string words_in_sentence(string sentence){
    string result = "";
    int len = 0;
    for(int i=2; ;i++){
        bool isPrime = true;
        for(int j=2; j*j<=i; j++) if(i%j==0) {isPrime=false;break;}
        if(isPrime){
            len=i;
            break;
        }
    }
    vector<string> words;
    string word;
    for(char c:sentence+' '){
        if(c==' ') {
            if(len>1) result+=word+" ";
            else result+=word;
            word="";
            len=0;
        }else{
            word+=c;
            len++;
        }
    }
    return result.substr(0,result.size()-1);
}