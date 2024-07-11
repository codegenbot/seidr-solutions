if(arr.empty()) return -32768;
    int product = 1;
    int sum = 0;
    for(int num : arr){
        if(num > 0) sum += num;
        else if(num < 0) sum -= num;
        product *= (num == 0) ? 0 : (num > 0 ? 1 : -1);
    }
    return sum * product;
}