def make_palindrome(s: str) -> str:
    s = s.replace(' ', '').lower()
    if s == s[::-1]:
        return s
    for i in range(len(s)):
        postfix = s[i:]
        if postfix == postfix[::-1]:
            left_half = s[:i]
            right_half = postfix[::-1]
            middle_chars = len(postfix) // 2 * [postfix[0]]
            return ''.join([left_half] + middle_chars + [right_half])
    half = len(s) // 2
    left_half = s[:half]
    right_half = s[half:][::-1]
    if len(left_half) < len(right_half):
        return left_half + left_half[::-1] + right_half
    return left_half + right_half