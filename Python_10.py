def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return "The palindrome is: " + s
    else:
        prefix = s[0]
        suffix = s[-1]
        rest = s[1:-1] + prefix + suffix
        while not rest == rest[::-1]:
            rest = prefix + rest + suffix
        return "The palindrome is: " + rest