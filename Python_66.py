def sumDigits(n):
    def digit_sum(num):
        return sum(int(digit) for digit in str(num))

    return min(
        digit_sum(i) for i in range(1, n + 1) if str(digit_sum(i)).count("8") == 0
    )