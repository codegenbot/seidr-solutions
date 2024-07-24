```
 

def solve(s):
    result = ""
    is_upper = False
    for char in s:
        if char.isalpha():
            if is_upper:
                result += char.upper()
            else:
                result += char.lower()
            is_upper = not is_upper
        else:
            result += char
    return result[::-1] if not any(c.isalpha() for c in s) else result