def make_palindrome(string):
    palindrome = []
    for i, c in enumerate(string):
        if string[i] == string[-i - 1]:
            palindrome.append(c)
        else:
            palindrome.append(string[-i - 1])
    return "".join(palindrome)[::-1]