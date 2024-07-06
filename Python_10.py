def make_palindrome(string):
    palindrome = []
    for i in range(len(string)):
        if string[i] == string[-i - 1]:
            palindrome.append(string[i])
        else:
            palindrome.append(string[-i - 1])
            palindrome.append(string[i])
    if all(c == c[0] for c in string):
        return string
    return "".join(palindrome)