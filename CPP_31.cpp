bool is_divisible = false;
if(n <= 1) {
    return false;
}
for(int i = 2; i*i <= n; i++) {
    if(n % i == 0) {
        is_divisible = true;
        break;
    }
}
return !is_divisible;