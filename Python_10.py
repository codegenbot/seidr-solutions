Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.islower():
        i = len(string) - 1
        while i > 0 and string[i] == string[0]:
            i -= 1
        return string + string[:i][::-1]
    else:
        prefix = ''
        for char in string:
            if char.isalpha():
                prefix += char
            else:
                break
        suffix = string[len(prefix):].lower()
        i = len(suffix) - 1
        while i > 0 and suffix[i] == suffix[0]:
            i -= 1
        return prefix + suffix[:i][::-1] + ''.join(reversed(string[len(prefix):len(string)-len(suffix)]))