Here is the completed code:

int skjkasdkd(vector<int> lst){
    int max_prime = 0;
    for(int i=2; i*i <= 1000000; i++){
        bool is_prime = true;
        if(i==2 || i==3) continue;
        if(i%2 == 0 || i%3 == 0) is_prime = false;
        for(int j = 5; j*j <= i; j += 6){
            if(i%j == 0 || i%(j+2) == 0) {
                is_prime = false;
                break;
            }
        }
        if(is_prime && i > max_prime) max_prime = i;
    }
    int sum = 0;
    while(max_prime > 0){
        sum += max_prime % 10;
        max_prime /= 10;
    }
    return sum;