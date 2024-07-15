numbers = list(map(int, input().split()))
threshold = int(input())

print(*[num for num in numbers if num > threshold], sep='\n')