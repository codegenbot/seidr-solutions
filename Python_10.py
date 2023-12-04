def make_palindrome(string):
    suffix = ""
    for i in range(len(string)):
        if string[i:] == string[i:][::-1]:
            suffix = string[i:]
            break
    return string + suffix[::-1]
