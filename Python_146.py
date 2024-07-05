def specialFilter(nums):
    def is_odd(n):
        return n % 2 != 0

    def first_digit(n):
        while n >= 10:
            n //= 10
        return n

    def last_digit(n):
        return n % 10

    count = 0
    for num in nums:
        abs_num = abs(num)
        if (
            abs_num > 10
            and is_odd(first_digit(abs_num))
            and is_odd(last_digit(abs_num))
        ):
            count += 1

    return count