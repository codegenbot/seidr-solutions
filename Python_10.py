def make_palindrome(string: str) -> str:
    longest_palindrome_suffix = ""
    for i in range(len(string), -1, -1):
        if is_palindrome(string[i:]):
            longest_palindrome_suffix = string[i:]
            break
    return string + longest_palindrome_suffix[::-1]