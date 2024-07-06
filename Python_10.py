def make_palindrome(string):
    if string == string[::-1]:
        return string
    palindrome = []
    for i in range(len(string)):
        if string[i] == string[-i - 1]:
            palindrome.append(string[i])
        else:
            palindrome.append(string[-i - 1])
            palindrome.append(string[i])
    return "".join(palindrome)