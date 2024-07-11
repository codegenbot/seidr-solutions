```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string

    new_str = ""
    for i in range(len(string)):
        if i > (len(string) - i) // 2 and string[i:] == string[i:][::-1]:
            new_str += string[i]
        else:
            new_str += string[-i - 1]

    first_half = new_str
    second_half = new_str[::-1]

    while len(first_half) < len(string):
        if string[0] in first_half or string[0] in second_half:
            first_half = first_half[1:]
            second_half = second_half[:-1]
        else:
            first_half = string[0] + first_half
            second_half = second_half + string[0]

    return first_half + second_half