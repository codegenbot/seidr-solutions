def make_palindrome(string: str) -> str:
    if len(string) == 0:
        return ""
    reversed_string = string[::-1]
    common_prefix = ''
    i, j = 0, len(string) - 1
    while i <= j:
        if string[i] == reversed_string[j]:
            common_prefix += string[i]
            i += 1
            j -= 1
        else:
            break
    return string + common_prefix[::-1]