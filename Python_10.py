def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for i in range(len(string)):
        if (
            string[:i].replace(string[i], "") == string[:i][::-1]
            and string[i + 1 :].replace(string[i], "") == (string[i + 1 :])[::-1]
        ):
            return string[:i] + string[i - 1 :: -1]
    return string + string[::-1]