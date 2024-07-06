
def make_palindrome(string):
    if len(string) % 2 == 1:
        return "".join(reversed(string))
    else:
        mid = len(string) // 2
        return string[:mid] + reversed(string[mid:])