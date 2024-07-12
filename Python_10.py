def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for char in string:
        temp = string
        for i in range(len(temp)):
            if temp[i] == char:
                temp = temp[:i] + temp[i+1:]
        if temp + temp[::-1] == "".join(reversed(string)):
            return char + string + string[::-1]
    return string + string[::-1]