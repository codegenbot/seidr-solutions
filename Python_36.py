def has_property(num: int) -> bool:
    return '3' in str(num) or '5' in str(num)

def fizz_buzz(n: int) -> int:
    count = sum(1 for i in range(1, n + 1) if has_property(i))
    return count