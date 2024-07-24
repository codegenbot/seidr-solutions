```
def concatenate_strings():
    strings = input("Enter strings separated by space: ").split()
    result = ''
    for string in strings:
        if len(string) > 5:
            result += string + ' '
    return result.strip()