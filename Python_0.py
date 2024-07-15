numbers = list(map(int, input().split()))
threshold = int(input())

result = [num for num in numbers if num > threshold]

for num in result:
    print(num)