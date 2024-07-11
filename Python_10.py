def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s + s
    
    result = []
    for char in s:
        result.append(char)
    
    middle_index = len(result) // 2
    reversed_half = list(reversed(result[middle_index:]))
    half_length = len(reversed_half)
    
    for i in range(half_length):
        result.insert(0, reversed_half[i])
    
    return "".join(result)