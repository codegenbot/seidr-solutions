def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    else:
        palindrome = ""
        for i in range(len(string)):
            palindrome += string[i]
            if i > 0:
                palindrome = string[0] + palindrome + string[0]
        return palindrome