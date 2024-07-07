int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        switch (c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
                break;
            case 'y': 
                if (s.back() == 'y') // check if 'y' is at the end of the string
                    count++; 
                break;
        }
    }
    return count;
}