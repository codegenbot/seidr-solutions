def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string[::-1]
    for i in range(len(string)):
        if string[i:] == string[i:] + (string[:i][::-1]).lower():
            return (string[:i][::-1]).lower() + string[i:].lower()
    return string + string[::-1]