def make_palindrome(s):
    if s == s[::-1]:
        return s
    for char in range(len(s)):
        postfix = s[char:]
        if postfix == postfix[::-1]:
            left_half = s[:char]
            right_half = postfix[::-1]
            half_length = len(postfix) // 2
            left_middle_chars = postfix[:half_length]
            right_middle_chars = postfix[half_length:]
            return "".join([left_half, (left_middle_chars + right_middle_chars)[::-1]])
    half = len(s) // 2
    left_half = s[:half]
    right_half = s[half:][::-1]
    if len(left_half) < len(right_half):
        return "".join([left_half + left_half[::-1], right_half[1:]])
    return "".join([left_half, right_half[1:]]);