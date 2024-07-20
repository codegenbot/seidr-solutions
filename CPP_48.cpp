bool is_palindrome(string text){
    int start = 0;
    int end = text.size() - 1;

    while (start < end) {
        if (text[start] != text[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}