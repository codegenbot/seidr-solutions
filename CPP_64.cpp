Here is the solution:

int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        switch (tolower(c)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                if (c == tolower(s.back())) // check if 'y' at the end
                    break;
                count++;
                break;
        }
    }
    return count;
}