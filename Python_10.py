```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for i in range(len(string)):
        for j in range(i+1, len(string)+1):
            substring = string[i:j]
            if substring == substring[::-1]:
                return substring + string[:i][::-1] + string[j:][::-1]
    if not string or len(string) % 2 == 0:
        return (string[0] + "a" * ((len(string) // 2) + (len(string) % 2)))
    return (string[0] + "a" + string[0]) * ((len(string) // 2) + (len(string) % 2))