if(arr.empty()) return -32768;
int prod = 1;
int sum = 0;
for(int num : arr){
    if(num > 0) prod *= 1;
    else if(num < 0) prod *= -1;
    sum += abs(num);
}
return prod * sum;
}