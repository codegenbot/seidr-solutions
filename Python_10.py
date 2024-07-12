Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.islower():
        rev_str = string[::-1]
        return string + rev_str
    else:
        for i in range(len(string)):
            if string[i].isalpha() and string[i].lower() != string[i]:
                return string[:i] + string[i].swapcase() + string[i:] + string[i::][::-1]
        return string + string[::-1]