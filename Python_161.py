```
def solve(s):
    result = ""
    for char in s:
        if char.isalpha():
            result += char.swapcase()
        else:
            result += char
    return result[::-1] if result.isalnum() == False else result