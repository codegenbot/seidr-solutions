def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if not string:
        return ""
    elif is_palindrome(string):
        return string + string
    else:
        first_half = list(string)
        second_half = list(reversed(first_half))
        
        for i in range(len(string)):
            if first_half[i:] == list(reversed(first_half[i:])):
                return "".join(first_half) + "".join(second_half)
            
        for i in range(len(string), 0, -1):
            if string[:i][::-1] == string[:i]:
                return "".join(first_half) + "".join(second_half)[:i]
                
    return "".join(first_half) + "".join(second_half)