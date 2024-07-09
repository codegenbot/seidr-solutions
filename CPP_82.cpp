int length = str.length();
bool isPrime = true;

for(int i = 2; i <= sqrt(length); i++) {
    if(length % i == 0) {
        isPrime = false;
        break;
    }
}

return isPrime;