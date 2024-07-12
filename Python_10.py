def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    min_len = len(string)
    for i in range(len(string)):
        for j in range(i + 1, len(string)):
            prefix = string[:i]
            suffix = string[j:]
            palindrome = prefix + string[i:j][::-1] + suffix[::-1]
            if len(palindrome) < min_len:
                min_len = len(palindrome)
                result = palindrome
    return result