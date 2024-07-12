```
def solve(s):
    result = ""
    is_letter_prev = False
    for c in s:
        if c.isalpha():
            result += c.swapcase()
            is_letter_prev = True
        elif is_letter_prev:
            result += c
            is_letter_prev = False
        else:
            result += c
    return result[::-1] if not any(c.isalpha() for c in s) else result