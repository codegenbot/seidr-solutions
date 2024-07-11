def make_palindrome(string: str) -> str:
    def is_palindrome(s: str) -> bool:
        return s == s[::-1]

    if is_palindrome(string):
        return string + string[::-1]
    else:
        while not is_palindrome(string):
            for char in 'abcdefghijklmnopqrstuvwxyz':
                if string.find(char) == -1:
                    string = string + char
                    break
        return string + string[::-1]