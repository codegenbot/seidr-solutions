def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + (string[0] if len(string) % 2 else '')
    for i in range(len(string), 0, -1):
        prefix = string[:i]
        suffix = string[i-1::-1]
        if prefix == prefix[::-1]:  
            return prefix + string + suffix
    return string + string[::-1]