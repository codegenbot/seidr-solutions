def fizz_buzz(n: int) -> int:
    def has_property(num):
        return num % 11 == 0 and '7' in str(num) and num % 13 == 0

    count = sum(1 for i in range(1, n + 1) if has_property(i))
    
    return count