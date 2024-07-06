def make_palindrome(string):
    rev = list(reversed(string))
    for i in range(len(rev)):
        if rev[i] != string[i]:
            return False
    return True