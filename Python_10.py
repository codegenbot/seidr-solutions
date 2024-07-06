def make_palindrome(string: str) -> str:
    while not is_palindrome(string):
        for i in range(len(string)):
            if string[i] != string[-1 * (i + 1)]:
                postfix = string[1:i][::-1]
                return string + postfix
    return string + string[::-1]