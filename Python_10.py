```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string

    new_str = ""
    left, right = 0, len(string) - 1
    while left <= right:
        if string[left:] == string[left:][::-1] and string[right:] == string[right:][::-1]:
            new_str += string[left]
            left += 1
        elif string[right:] == string[right:][::-1]:
            new_str += string[right]
            right -= 1
        else:
            if string[left] != string[right]:
                return ""
            new_str += string[left]
            left += 1
            right -= 1

    return new_str + new_str[::-1]