Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string[::-1]
    else:
        i = 0
        for j in range(len(string), -1, -1):
            if string[i:j] == string[i:j][::-1]:
                break
        return string + string[j:][::-1]