int count = 0;
        for (char c : str) {
            if (c == '[') {
                count++;
            } else if (c == ']' && count > 0) {
                count--;
            }
        }
        return count < str.size() && count > 0;