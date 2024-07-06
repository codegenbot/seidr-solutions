def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    postfix = ""
    for char in string:
        postfix = char + postfix
    reversed_string = string[::-1]
    return string + postfix + postfix if postfix != "" else reversed_string