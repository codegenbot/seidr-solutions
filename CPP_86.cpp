string anti_shuffle(string s){
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            char temp = s[i];
            while (temp != ' ') {
                int j = i;
                while (j < s.length() && s[j] <= temp) {
                    temp = s[j];
                    j++;
                }
                if (j == s.length()) break;
                result += temp;
                i = j - 1;
            }
        }
    }
    return result;
}