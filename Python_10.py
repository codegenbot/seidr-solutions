def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower():
        return string + "".join(reversed(string))
    else:
        for i in range(len(string), -1, -1):
            prefix = string[:i]
            suffix = string[i:]
            if is_palindrome(suffix):
                return prefix + "a" * (len(prefix) // 2) + prefix[::-1] + suffix
        return string + "".join(reversed(string))