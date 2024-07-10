def make_palindrome(string: str) -> str:
    if not string:
        return string
    if is_palindrome(string):
        return string + "#" + string[::-1]
    for i in range(len(string)):
        prefix = string[:i+1]
        suffix = string[i+1:]
        if is_palindrome(prefix) and is_palindrome(suffix):
            return prefix + string[i] + suffix[::-1]