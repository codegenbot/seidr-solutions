```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string

    result = ''
    i, j = 0, len(string) - 1
    while i <= j:
        if string[i] == string[j]:
            result += string[i]
            i += 1
            j -= 1
        else:
            result = string[j] + result
            j -= 1
            if string[i] != string[j]:
                result = string[i] + result
                i += 1

    return result