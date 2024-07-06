def make_palindrome(string):
    palindrome = []
    rev_string = reversed(string)
    for i, c in enumerate(string):
        if c == rev_string[i]:
            palindrome.append(c)
        else:
            palindrome.append(rev_string[i])
    return "".join(palindrome)