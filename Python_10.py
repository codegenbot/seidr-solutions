def is_palindrome(s: str) -> bool:
    return s == s[::-1]


def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    n = len(string)
    new_string = "#" + "#".join(list(string)) + "#"
    i_max = n - 1
    while not is_palindrome(new_string):
        i_max -= 1
        new_string = new_string[: i_max + 1] + "#"
    palindrome = ""
    for i in range(2 * n - 1):
        if i < n:
            palindrome += string[i // 2]
        elif i >= n and i < 2 * n - 1:
            palindrome += string[(n - 1) - ((i - n) // 2)]
    return palindrome