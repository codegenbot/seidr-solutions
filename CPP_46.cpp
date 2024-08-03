int fib4(int n){
    if(n<0 || n%2==1) return 0;
    int a=0,b=0,c=2,d=2;
    for(int i=3;i<=n;i++){
        int temp=a+b+c;
        a=b;c=temp;b=c;d=temp;
    }
    return d;
}