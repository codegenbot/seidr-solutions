```
def is_palindrome(input_string: str) -> bool:
    return input_string == input_string[::-1]

def make_palindrome(input_string: str) -> str:
    if is_palindrome(input_string):
        return input_string

    for i in range(len(input_string)):
        char = input_string[i]
        postfix = input_string[i+1:]
        suffix = ''.join(reversed(postfix))
        new_input = char + input_string + suffix
        if is_palindrome(new_input):
            return new_input