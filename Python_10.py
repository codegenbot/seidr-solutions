def make_palindrome(s):
    if len(s) == 0:
        return ""

    s = list(s)
    i, j = 0, len(s) - 1

    while i <= j:
        palindrome = "".join(
            s[: i + 1] + list(reversed("".join(s[i + 1 : j])))
        ) + "".join(reversed(s[j:]))
        i += 1
        j -= 1

    return "".join(s)