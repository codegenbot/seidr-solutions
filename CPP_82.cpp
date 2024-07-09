bool prime_length(string str){
    for(char c : str){  
        int len = (int)str.size();
        for(int i=2; i*i <= len; i++){
            if(len%i==0)
                return false;
        }
        return true;
    }
}