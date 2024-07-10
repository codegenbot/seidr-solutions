def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if not string:
        return ""
    else:
        if is_palindrome(string):
            return string + string
        else:
            for i in range(len(string)):
                for j in range(len(string)):
                    new_string = string[:i] + chr(ord(string[i]) ^ ord('a')) + string[i:]
                    if is_palindrome(new_string):
                        return "" + new_string + "" + new_string
            return "" + string[::-1] + "" + string[::-1]