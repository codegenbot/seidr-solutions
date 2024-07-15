n = int(input())
numbers = list(map(int, input().split()))
res = sum(num for num in numbers if num % 2 == 0)
print(res)