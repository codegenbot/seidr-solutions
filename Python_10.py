```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return "The palindrome is: " + string
    else:
        prefix = string[0]
        suffix = string[-1]
        rest = string[1:-1] + prefix + suffix
        while not rest == rest[::-1]:
            rest = prefix + rest + suffix
        return "The palindrome is: " + rest

print(make_palindrome("radar"))