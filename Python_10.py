def make_palindrome(string: str) -> str:
    reversed_string = string[::-1]
    suffix = ""
    for i in range(len(reversed_string)):
        if is_palindrome(reversed_string[i:]):
            suffix = reversed_string[i:][::-1]
            break
    return string + suffix