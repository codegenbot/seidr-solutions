def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower():
        n = 0
        while n < len(string) and string[n] == string[-1 - n]:
            n += 1
        return string + string[:n][::-1]
    else:
        s = string.lower()
        n = 0
        while n < len(s) and s[n] == s[-1 - n]:
            n += 1
        return s[:n][::-1] + s + s[n:][::-1]