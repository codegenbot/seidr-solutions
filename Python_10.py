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
        suffix = string[len(prefix):]
        while not is_palindrome(suffix):
            suffix = chr((ord('a') + ord('z') - 1) % (ord('z') - ord('a') + 1)) + suffix
        return prefix + suffix[::-1]