int count = 0;
    for (char c : brackets) {
        if (c == '(') {
            count++;
        } else {
            count--;
        }
        if (count < 0) {
            return false;
        }
    }
    return count == 0;
}