bool is_divisor = false;
for(int i = 2; i <= sqrt(n); i++){
    if(n % i == 0){
        is_divisor = true;
        break;
    }
}
return !is_divisor;