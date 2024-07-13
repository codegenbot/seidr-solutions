digits = input().split()
total = sum(
    [
        (int(digit) * 2 - 9) if int(digit) * 2 > 9 else int(digit) * 2
        for index, digit in enumerate(digits)
        if index % 2 != 0
    ]
)
print(total)