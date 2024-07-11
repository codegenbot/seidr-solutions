int count = 0;
    for (int num : n) {
        int sum = 0;
        int temp = num; // Copy of the number

        while (temp != 0) {
            sum += abs(temp % 10); // Get the absolute value of the last digit
            temp /= 10; // Remove the last digit
        }
        
        if (sum > 0) {
            count++;
        }
    }
    
    return count;
}