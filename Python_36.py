def has_property(num: int) -> bool:
    return num % 11 == 0 and '7' in str(num) and num % 13 != 0

def fizz_buzz(n: int) -> int:
    count = sum(1 for i in range(1, n + 1) if has_property(i))
  
    return count