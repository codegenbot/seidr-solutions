if(a == 1 || a == 0) return false;
for(int i = 2; i <= a / 2; i++){
    if(a % i == 0) return false;
}
return true;
}
bool is_multiply_prime(int a){
    int count = 0;
    for(int i = 2; i <= a; i++){
        if(is_prime(i)){
            if(a % i == 0) count++;
        }
    }
    if(count == 3) return true;
    else return false;
}