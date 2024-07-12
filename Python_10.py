def is_palindrome(s: str) -> bool:
    return s == s[::-1]


def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    n = len(string)
    new_string = "#" + "#".join(list(string)) + "#"
    i_max = n - 1
    while True:
        if i_max < 0:
            break
        new_string = new_string[: i_max + 1] + "#"
        i_max -= 1
    palindrome = ""
    for i in range(len(new_string) - 1):
        if i < len(string) or i >= len(string) * 2 - n - 1:
            palindrome += new_string[i]
    return palindrome