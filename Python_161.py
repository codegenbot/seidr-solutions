def solve(s):
    result = ""
    is_prev_letter = False
    for c in s:
        if c.isalpha():
            result += c.swapcase()
            is_prev_letter = True
        elif is_prev_letter:
            result += c
            is_prev_letter = False
        else:
            result += c
    return result[::-1] if not any(c.isalpha() for c in s) else result