def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    else:
        if string[0] != string[-1]:
            half = int(len(string) / 2)
            return string[:half] + string[0] + string[half:] + string[-1]
        else:
            for i in range(1, len(string) - 1):
                if string[i - 1] == string[-i]:
                    return string[:i] + string[0] + string[i:][::-1]