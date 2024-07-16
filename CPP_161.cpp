string result = s;
    int left = 0, right = s.size() - 1;
    while (left < right) {
        if (isalpha(s[left]) && isalpha(s[right])) {
            result[left] = islower(s[left]) ? toupper(s[left]) : tolower(s[left]);
            result[right] = islower(s[right]) ? toupper(s[right]) : tolower(s[right]);
        }
        left++;
        right--;
    }
    
    if (left == right && isalpha(s[left])) {
        result[left] = islower(s[left]) ? toupper(s[left]) : tolower(s[left]);
    }
    
    if (isalpha(s[0]) || isalpha(s[s.size() - 1])) {
        return result;
    }
    
    reverse(result.begin(), result.end());
    return result;
}