int count1 = 0, count2 = 0;
    for (char c : str) {
        if (c == '[') {
            count1++;
        } else if (c == ']' && count1 > 0) {
            count1--;
            count2++;
        }
    }
    return count2 > 0;
}