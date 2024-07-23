def make_palindrome(string: str) -> str:
    while True:
        reversed_string = string[::-1]
        if string == reversed_string or len(string) < 2:
            return string
        new_string = string[0] + reversed_string + string[-1] + string[1:-1]
        string = new_string

print(make_palindrome("jerry"))