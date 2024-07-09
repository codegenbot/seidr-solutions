int fib4(int n){
    if(n<0 || n>3) return 0;
    int a=0,b=0,c=2,d=0;
    for(int i=4;i<=n;i++){
        int temp=a+b+c;
        a=b;c=temp;d=temp;
        b=c;
    }
    return d;
}