string result = "";
    int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    string word = "";
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (word.length() > 0) {
                int len = word.length();
                bool is_prime = false;
                for (int j = 0; j < sizeof(prime)/sizeof(prime[0]); j++) {
                    if (len == prime[j]) {
                        is_prime = true;
                        break;
                    }
                }
                if (is_prime) {
                    result += word + " ";
                }
                word = "";
            }
        } else {
            word += sentence[i];
        }
    }
    if (word.length() > 0) {
        int len = word.length();
        bool is_prime = false;
        for (int j = 0; j < sizeof(prime)/sizeof(prime[0]); j++) {
            if (len == prime[j]) {
                is_prime = true;
                break;
            }
        }
        if (is_prime) {
            result += word;
        }
    }
    return result;
}