def make_palindrome(s: str) -> str:
    if is_palindrome(s):
        return s * 2
    n = len(s)
    new_string = "#" + "#".join(list(s)) + "#"
    i_max = n - 1
    while not is_palindrome(new_string):
        i_max -= 1
        new_string = new_string[:i_max + 1] + "#"
    return "".join(c for c in new_string if c != "#") * (n // 2)