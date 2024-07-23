```Python
def make_palindrome(string: str) -> str:
    if not string.isalnum():
        return ""
    
    new_string = ""
    for i in range(len(string), 0, -1):
        if string[i-1].isalnum(): 
            new_string += string[i-1]
    
    return new_string + string + new_string[::-1].lower()