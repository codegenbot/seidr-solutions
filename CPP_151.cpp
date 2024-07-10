sum = 0.0;
odd_sum = 0.0;

for (float num : lst) {
    if (num > 0 && num == (int)num && (int)num % 2 != 0) {
        odd_sum += (double)num;
    }
}

return 2 * odd_sum;