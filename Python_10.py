def make_palindrome(string: str) -> str:
    for i in range(len(string), 0, -1):
        for j in range(1, len(string) + 1):
            if string[:i] == string[:i][::-1]:
                return string[:j].lower() + string[0].upper() + string[j:][::-1]