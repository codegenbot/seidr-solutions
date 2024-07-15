numbers = list(map(int, input().split()))
threshold = int(input())
result = [num for num in numbers if num > threshold]
print(*result, sep="\n")