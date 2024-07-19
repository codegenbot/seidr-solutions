int count = 0;
    count += 9; // numbers starting with 1
    count += 9; // numbers ending with 1
    count -= 1; // remove the duplicate case of 1
    return count * (n - 1);
}