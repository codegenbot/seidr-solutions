numbers = []
for _ in range(2):
    numbers.append(int(input()))

if numbers[1] % 2 == 0:
    print(numbers[0])
    print(numbers[1])
    print(0)
else:
    print(numbers[0])
    print(numbers[1] - 1)
    print(1)