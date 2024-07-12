```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for char in string:
        new_string = char + string[1:] + string[:0][::-1]
        if new_string == new_string[::-1]:
            return new_string
    return string + string[::-1]

print(make_palindrome(input("Enter a string: ")))