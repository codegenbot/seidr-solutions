string result = "";
    string word = "";
    int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31}; // List of prime numbers up to 31
    
    for (char c : sentence) {
        if (c == ' ') {
            if (word.size() > 0) {
                for (int p : prime) {
                    if (word.size() == p) {
                        result += word + " ";
                        break;
                    }
                }
                word = "";
            }
        } else {
            word += c;
        }
    }
    
    if (word.size() > 0) {
        for (int p : prime) {
            if (word.size() == p) {
                result += word;
                break;
            }
        }
    }
    
    return result;
}