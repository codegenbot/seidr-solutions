if(x < 1) return false;
if(n == 1 && x != 1) return false;
int power = log(x) / log(n);
return (pow(n, power) == x);
}