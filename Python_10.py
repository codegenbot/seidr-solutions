def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for i in range(len(string)):
        middle = len(string) // 2
        rev_string = string[i:] + string[i::-1]
        if string == rev_string:
            return rev_string