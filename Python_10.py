Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.islower():
        rev = string[::-1]
        for i in range(len(string)):
            if string[:i+1] == string[:i+1][::-1]:
                return string + rev[i:]
    else:
        lower = string.lower()
        rev_lower = lower[::-1]
        for i in range(len(lower)):
            if lower[:i+1] == lower[:i+1][::-1]:
                if string[0].islower():
                    return (string[0].upper() + string[1:i+1] + string[i:][::-1])
                else:
                    return (string[0].lower() + string[1:i+1] + string[i:][::-1])