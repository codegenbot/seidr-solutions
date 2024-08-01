def make_palindrome(string: str) -> str:
    s = s.lower()
    new_string = []
    
    for char in s:
        new_string.append(char)
        new_string.append(char
        
    # Add the first and last characters at the beginning
    new_string.insert(0, s[0])
    new_string.append(s[-1]
    
    return ''.join(new_string).upper()