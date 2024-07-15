n, *numbers = map(int, input().strip().split())
if len(numbers) != n:
    raise ValueError
res = sum(num for num in numbers if num % 2 == 0)
print(res)