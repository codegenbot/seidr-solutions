```
def digitSum(s):
    digit_sum = sum(int(c) for c in s if c.isdigit())
    non_digit_count = sum(1 for c in s if not c.isdigit())
    return digit_sum + non_digit_count