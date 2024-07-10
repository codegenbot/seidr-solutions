def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string[::-1]

    for i in range(len(string)):
        for j in range(i + 1):
            new_string = (
                string[:j] + string[i - j : j + i - j] + string[j:i] + string[i + 1 :]
            )
            if new_string == new_string[::-1]:
                return new_string
    return string + string[::-1]