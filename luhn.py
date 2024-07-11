digits = list(map(int, input().split()))
new_digits = [x * 2 if i % 2 == 1 else x for i, x in enumerate(digits)]
new_digits = [x - 9 if x > 9 else x for x in new_digits]
print(sum(new_digits))