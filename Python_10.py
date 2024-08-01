```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    for i in range(len(string)):
        first_part = string[:i]
        last_part = string[i:][::-1]
        if first_part == first_part[::-1] and last_part == last_part[::-1]:
            return first_part + last_part