numbers = list(map(int, input().split()))
new_digits = []
for i, num in enumerate(numbers):
    if i % 2 == 0:
        new_digits.append(num)
    else:
        doubled = num * 2
        if doubled > 9:
            doubled -= 9
        new_digits.append(doubled)
sum_digits = sum(new_digits)
print(sum_digits)