````
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for i in range(len(string)):
        postfix = string[i:]
        if postfix == postfix[::-1]:
            left_half = string[:i]
            right_half = postfix[::-1]
            middle_chars = len(postfix) // 2 * [postfix[0]]
            return ''.join([left_half] + middle_chars + [right_half])
    half = len(string) // 2
    left_half = string[:half]
    right_half = string[half:][::-1]
    if len(left_half) < len(right_half):
        return left_half + left_half[::-1] + right_half
    return left_half + right_half