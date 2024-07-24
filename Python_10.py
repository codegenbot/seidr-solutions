def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for i in range(len(string)):
        postfix = string[i:]
        if postfix == postfix[::-1]:
            left_half = string[:i]
            right_half = postfix[::-1]
            half_length = len(postfix) // 2
            left_middle_chars = postfix[:half_length]
            right_middle_chars = postfix[half_length:]
            return "".join(
                [left_half] + list(left_middle_chars)[::-1] + right_middle_chars
            )
    half = len(string) // 2
    left_half = string[:half]
    right_half = string[half:][::-1]
    if len(left_half) < len(right_half):
        return (
            left_half + "".join([c for c in left_half])[: -len(left_half)] + right_half
        )
    return left_half + right_half