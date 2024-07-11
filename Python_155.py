```
def even_odd_count(num):
    num = str(abs(num))
    return (sum(int(digit) % 2 == 0 for digit in num), len(num) - sum(int(digit) % 2 == 0 for digit in num))