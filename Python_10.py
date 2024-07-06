def make_palindrome(string):
    prefix = string[:len(string)//2]
    suffix = string[len(string)//2:]
    return prefix + suffix[::-1]