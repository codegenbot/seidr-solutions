def is_palindrome(s: str) -> bool:
    return s == s[::-1]

def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    n = len(string)
    new_string = "#" + "#".join(list(string)) + "#"
    i_max = n - 1
    while not is_palindrome(new_string):
        new_string = new_string[:i_max+1] + "#"
        i_max -= 1
    result = ""
    for i in range(len(new_string)):
        if (i < len(string)) or ((len(string) * 2 - 1) > i >= len(string) - 1 and i % 2 != 0):
            if new_string[i] == "#":
                result += "r"
            else:
                result += new_string[i]
    return result