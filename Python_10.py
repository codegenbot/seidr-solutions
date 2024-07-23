def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.isalnum():
        i = 0
        j = len(string) - 1
        while i < j and string[i] == string[j]:
            i += 1
            j -= 1
        return string + string[j:i:-1].lower()
    else:
        return ""