```
def solve(s):
    result = ""
    is_prev_letter = False
    for char in s:
        if char.isalpha():
            result += char.swapcase() if is_prev_letter else char.upper()
            is_prev_letter = True
        else:
            result += char
            is_prev_letter = False
    return result if any(char.isalpha() for char in s) else s[::-1]