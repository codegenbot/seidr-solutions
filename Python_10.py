def make_palindrome(string):
    palindrome = []
    for i, c in enumerate(string):
        if len(string) % 2 == 0:
            if string[i] != string[-i - 1]:
                palindrome.append(c)
                palindrome.append(string[-i - 1])
        else:
            palindrome.append(c)
    return "".join(palindrome)