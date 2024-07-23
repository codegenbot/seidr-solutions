Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.isalnum():
        i = 0
        for j in range(len(string)-1, -1, -1):
            if string[i] != string[j]:
                break
            i += 1
        return string + string[:i][::-1]
    else:
        return "Input must be alphanumeric"