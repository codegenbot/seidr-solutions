def make_palindrome(string: str) -> str:
    n = len(string)
    prefix = ""
    while not is_palindrome(prefix + string):
        if string:  
            prefix += string[0]
            string = string[1:]
        else:
            break
    return prefix + string + prefix[::-1]