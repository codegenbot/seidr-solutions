```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for i in range(len(string)):
        first_half = string[:i+1]
        second_half = string[i:][::-1]
        if first_half + second_half == first_half + first_half[::-1]:
            return first_half + second_half
    return string + string[::-1]