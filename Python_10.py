def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    else:
        for char in string:
            temp = string.replace(char, "")
            if temp == temp[::-1]:
                return char + temp + temp[::-1]
        return string + string[::-1]