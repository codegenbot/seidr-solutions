def has_property(num: int) -> bool:
    return '3' in str(num) and '5' in str(num)

def fizz_buzz(n: int) -> int:
    count = sum(1 for i in range(1, n + 1) if i % 3 == 0 or i % 5 == 0 or has_property(i))
  
    return count