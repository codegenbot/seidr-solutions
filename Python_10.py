```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for i in range(len(string)):
        for j in range(i + 1, len(string)):
            substring = string[i:j]
            if substring == substring[::-1]:
                return substring + string[:i][::-1] + string[j:][::-1]
    if not string or len(string) % 2 == 0:
        middle = (len(string) // 2) * "a"
        return string[0] + middle + string[0]
    return string[0] + "a" + string[0] + (len(string) - 1) * "a" + string[0]