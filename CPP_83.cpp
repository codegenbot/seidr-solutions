int count = 0;
    count += 9; // for numbers starting with 1
    count += 9; // for numbers ending with 1
    count -= 1; // to remove the double counting of numbers starting and ending with 1
    return count;
}