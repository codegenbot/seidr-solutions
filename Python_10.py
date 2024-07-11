```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string + string[::-1]
    else:
        reversed_string = string[::-1]
        for i in range(len(reversed_string)):
            new_string = string + str(i+1) * (len(reversed_string) - len(string)) + reversed_string
            if is_palindrome(new_string):
                return new_string