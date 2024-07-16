for(auto it = x.begin(); it != x.end(); ){
    bool evenDigit = false;
    int num = *it;
    while(num > 0) {
        if(num % 2 == 0){
            evenDigit = true;
            break;
        }
        num /= 10;
    }
    if(evenDigit) {
        it = x.erase(it);
    } else {
        ++it;
    }
}
sort(x.begin(), x.end());
return x;
}