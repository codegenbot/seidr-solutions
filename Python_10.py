def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    for i in range(len(string)):
        middle = string[:i]
        end = string[i:][::-1]
        if end.startswith(middle):
            return middle + end
    return string + string[::-1]