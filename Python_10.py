def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string

    for i in range(len(string)):
        middle = len(string) // 2
        for j in reversed(range(len(string))):
            new_string = string[:j] + string[j].lower() * 2 + string[j:]
            if new_string == new_string[::-1]:
                return new_string