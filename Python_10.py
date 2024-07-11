```
def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s + s

    result = []
    for char in s:
        result.append(char)
        half = len(result) // 2
        second_half = result[half:]
        first_half = result[:half]
        reversed_second_half = second_half[::-1]
        if s == s[::-1]:
            return s + s
        else:
            result.extend(reversed_second_half)
    return "".join(result)