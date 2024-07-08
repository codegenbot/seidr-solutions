def make_palindrome(s):
    if len(s) == 0:
        return ""

    s = list(s)
    i, j = 0, len(s) - 1

    while i <= j:
        palindrome = ""
        while i <= j and s[i] != s[j]:
            left_half = s[: i + 1]
            right_half = s[j:]
            middle = "".join(reversed(left_half[1:]))
            palindrome = left_half[0] + middle + "".join(reversed(right_half))
            i += 1
            j -= 1

        if i <= j:
            palindrome += s[i]
        else:
            break

    return palindrome