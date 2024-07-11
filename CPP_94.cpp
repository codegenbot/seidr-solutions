Here is the completed code:

int skjkasdkd(vector<int> lst){
    int max_prime = 0;
    for(int i=2; i<=*max_element(lst.begin(),lst.end()); i++){
        bool is_prime = true;
        for(int j=2; j*j <= i;j++){
            if(i%j == 0) {
                is_prime = false;
                break;
            }
        }
        if(is_prime && i > max_prime){
            max_prime = i;
        }
    }
    int sum_of_digits = 0;
    while(max_prime>0) {
        sum_of_digits += (max_prime%10);
        max_prime /= 10;
    }
    return sum_of_digits;