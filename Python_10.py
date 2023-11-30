def make_palindrome(string: str) -> str:
    suffix = string[::-1]
    for i in range(len(string)):
        if string[i:] == suffix[:len(string)-i]:
            return string + suffix[len(string)-i:]
    return string