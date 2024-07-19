```
def is_happy(n):
    def get_digits_sum(num):
        return sum(int(digit) ** 2 for digit in str(num))

    seen = set()
    while n != 1 and n not in seen:
        seen.add(n)
        n = get_digits_sum(n)

    return n == 1