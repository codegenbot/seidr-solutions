def make_palindrome(string):
    result = ""
    for i, c in enumerate(string):
        if string[i] == string[-i - 1]:
            result += c + c
        else:
            result += string[-i - 1] + c
    return result