def is_palindrome(s: str) -> bool:
    return s == s[::-1]


def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    n = len(string)
    new_string = "#" + "#".join(list(string)) + "#"
    i_max = n - 1
    while not is_palindrome(new_string):
        new_string = new_string[: i_max + 1] + "#"
        i_max -= 1
    palindrome = ""
    for i in range(n * 2 - 1):
        if i < n or i > n * 2 - 2 - n:
            palindrome += new_string[i]
    return palindrome