if(arr.empty()) return -32768;
int product = 1, sum_magnitudes = 0;
for(int num : arr){
    product *= num == 0 ? 1 : num / abs(num);
    sum_magnitudes += abs(num);
}
return product * sum_magnitudes;