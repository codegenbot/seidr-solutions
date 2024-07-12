def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    n = len(string)
    new_string = "#" + "#".join(list(string)) + "#"
    while not is_palindrome(new_string):
        new_string = new_string[:n] + "#"
        n -= 1
    palindrome = ""
    for i in range(n*2-1):
        if (i < n) or ((n * 2 - 1) > i >= n - 1 and i % 2 != 0):
            palindrome += new_string[i]
    return palindrome