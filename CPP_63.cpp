int fibfib(int n){
    if(n == 0 || n == 1){
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    else{
        int a = 0, b = 0, c = 1, result;
        for(int i = 3; i <= n; i++){
            result = a + b + c;
            a = b;
            b = c;
            c = result;
        }
        return result;
    }
}