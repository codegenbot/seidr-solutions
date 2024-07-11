def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string[::-1]
    else:
        while True:
            for char in 'abcdefghijklmnopqrstuvwxyz':
                if string.find(char) == -1:
                    string = string + char
                    break
            if string == string[::-1]:
                break
        return string + string[::-1]