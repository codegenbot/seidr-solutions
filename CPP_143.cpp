string words_in_sentence(string sentence){
    vector<int> primes;
    for(int i=2; i<=50; i++){
        bool isPrime = true;
        for(int j=2; j*j <= i; j++){
            if(i%j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
            primes.push_back(i);
    }

    string result = "";
    string temp = sentence + " ";
    size_t start = 0, end;
    while((end = temp.find(" ")) != string::npos){
        size_t len = end - start;
        for(auto prime : primes){
            if(len == prime){
                result += temp.substr(start, end-start) + " ";
                start = end+1;
                break;
            }
        }
    }
    return result.substr(0, result.size()-1);
}