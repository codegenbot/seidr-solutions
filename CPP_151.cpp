long long sum = 0;
for (float num : lst) {
    if (num > 0 && floor(num) == num) { 
        if (num % 2 != 0) { 
            sum += pow(num, 2); 
        }
    }
}
return sum;