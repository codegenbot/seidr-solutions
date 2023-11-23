def make_palindrome(string: str) -> str:
    suffix = ""
    prefix = ""
    remaining = string

    while (prefix + remaining + suffix) != (suffix + remaining + prefix)[::-1]:
        if remaining:
            prefix = remaining[0]
            remaining = remaining[1:]
        else:
            break

    return prefix + remaining + suffix