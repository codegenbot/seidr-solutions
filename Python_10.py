def is_palindrome(string):
    return string == string[::-1]

def make_palindrome(string):
    if is_palindrome(string):
        return string

    palindromic_suffix = ''
    for i in range(len(string)):
        if is_palindrome(string[i:]):
            palindromic_suffix = string[i:]
            break

    prefix = string[:len(string) - len(palindromic_suffix)]
    return string + prefix[::-1]