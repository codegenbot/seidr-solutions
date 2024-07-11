int res = 0;
    for(int num : n) {
        int sum = 0;
        int num_copy = abs(num);
        while(num_copy != 0) {
            sum += num_copy % 10;
            num_copy /= 10;
        }
        if(sum > 0) {
            res++;
        }
    }
    return res;
}