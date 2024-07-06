def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for i in range(len(string)):
        middle = len(string) // 2
        for j in reversed(range(i, len(string))):
            new_string = string[:i] + string[i:j][::-1] + string[j:]
            if new_string == new_string[::-1]:
                return new_string