def make_palindrome(string):
    suffix = string[::-1]
    for i in range(len(suffix)):
        if suffix[:i+1] == suffix[::-1][:i+1]:
            break
    else:
        i = len(string) - 1
    return string + string[:i+1][::-1]