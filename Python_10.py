def is_palindrome(string: str) -> bool:
    """ 
def make_palindrome(string: str) -> str:
    reversed_string = string[::-1]
    for i in range(len(string)):
        if string[:i+1] == string[:i+1][::-1]:
            return string + reversed_string[i:]
    return string + reversed_string