def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s
    n = len(s)
    new_string = "#" + "#".join(list(s)) + "#"
    i_max = n - 1
    while not is_palindrome(new_string):
        new_string = new_string[: i_max + 1] + "#"
        i_max -= 1

    result = ""
    for i in range(len(new_string)):
        if new_string[i] != "#":
            result += new_string[i]
        else:
            if len(result) % 2 == 0:
                result += s[len(result) // 2]
            elif i % 2 != 0:
                result += s[(i - 1) // 2]
    return result