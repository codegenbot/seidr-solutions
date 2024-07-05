def luhn_algorithm(digits):
    total_sum = 0
    for i in range(16):
        num = digits[i]
        if i % 2 == 1:
            num *= 2
            if num > 9:
                num -= 9
        total_sum += num
    return total_sum


if __name__ == "__main__":
    input()
    digits = list(map(int, input().split()))
    print(luhn_algorithm(digits))