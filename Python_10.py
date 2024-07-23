def is_palindrome(input_string: str) -> bool:
    return input_string == input_string[::-1]

def make_palindrome(input_string: str) -> str:
    if is_palindrome(input_string):
        return input_string + input_string
    else:
        for i in range(len(input_string)):
            postfix = input_string[i:]
            if is_palindrome(postfix):
                return input_string + postfix[::-1]