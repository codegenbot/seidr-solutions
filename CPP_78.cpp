int hex_key(string num){
    int count = 0;
    for(int i=0; i<num.length(); i++){
        if(num[i] >= '2' && num[i] <= '7' || (num[i] >= 'B' && num[i] <= 'F')){
            bool isPrime = true;
            for(int j=2; j*j<=stoi(string(1,num[i])); j++){
                if(stoi(string(1,num[i]))%j == 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime) count++;
        }
    }
    return count;
}