int count = 0;
    count += 9; // for numbers starting with 1
    count += 9; // for numbers ending with 1
    count -= 1; // to exclude double counting of numbers starting and ending with 1
    count *= (n - 1); // Count for remaining digits
    return count;
}