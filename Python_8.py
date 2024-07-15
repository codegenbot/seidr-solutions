n = int(input())
numbers = list(map(int, input().split()))
if len(numbers) != n - 1:
    raise ValueError
res = sum(num for num in numbers if num % 2 == 0)
print(res)