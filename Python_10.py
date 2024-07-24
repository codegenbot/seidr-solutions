def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for i in range(len(string)):
        prefix = string[:i]
        suffix = string[i:]
        if prefix == prefix[::-1] and suffix == suffix[::-1]:
            return prefix + prefix[::-1] + suffix[::-1]