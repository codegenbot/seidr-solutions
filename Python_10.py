def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for length in range(len(string), 0, -1):
        for i in range(len(string) - length + 1):
            new_string = (
                string[:i] + string[i : i + length][::-1] + string[len(string) - i :]
            )
            if new_string == new_string[::-1]:
                return new_string