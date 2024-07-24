def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    half = len(string) // 2
    for i in range(len(string)):
        postfix = string[i:]
        if postfix == postfix[::-1]:
            left_half = string[:i]
            right_half = postfix[::-1]
            return ''.join([left_half, right_half])
    if len(string) % 2 != 0:
        return string[:half] + string[half][::-1]
    else:
        return string[:half] + string[half:]