def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for i in range(len(string)):
        middle = len(string) // 2
        if i < middle and string[i:] == string[i:][::-1]:
            return string[:i] + string[i:i+1] + string[i:][::-1]
    return string + string[::-1]