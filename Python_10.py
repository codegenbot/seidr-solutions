def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower():
        for i in range(len(string), 0, -1):
            if string[:i] == string[:i][::-1]:
                return string + string[:i][::-1]
    else:
        temp = string.lower()
        for i in range(len(temp), 0, -1):
            if temp[:i] == temp[:i][::-1]:
                return (
                    string[0].upper()
                    + temp[:i][::-1]
                    + string[-1].lower()
                    + temp[i - 1 :: 1]
                )