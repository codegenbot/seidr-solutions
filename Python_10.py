def make_palindrome(string):
    # Initialize a list to store the characters of the palindrome
    palindrome = []
    for i, c in enumerate(string):
        if string[i] == string[-i - 1]:
            palindrome.append(c)
        elif i < len(string) // 2 and string[i] != string[-i - 1]:
            palindrome.append(string[-i - 1])
            palindrome.append(c)
    return "".join(palindrome)