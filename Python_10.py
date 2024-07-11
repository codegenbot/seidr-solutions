```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for i in range(len(string)):
        for j in range(i+1, len(string)+1):
            substr = string[i:j]
            if substr == substr[::-1]:
                return string[:i][::-1] + substr + string[i:][::-1]
    if not string or len(string) % 2 == 0:
        return (string[0] + "a") * (len(string) // 2)
    return (string[0] + "a" + string[0]) * (len(string) // 2 + 1)