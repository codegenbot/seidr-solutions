
def make_palindrome(string):
    palindrome = []
    for i, c in enumerate(string):
        if string[i] == string[-i - 1]:
            palindrome.append(c)
        else:
            if c in palindrome and c in reversed(palindrome):
                continue
            palindrome.append(string[-i - 1])
            palindrome.append(c)
    return "".join(palindrome)[::-1]