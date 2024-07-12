bool is_one = (n == 1);
if(is_one) return false;

for(long long i=2; i*i<=n; i++)
    if(n%i==0)
        return false;
return true;