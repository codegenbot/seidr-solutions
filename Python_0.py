numbers = list(map(int, input().strip().split()))
threshold = int(input().strip())

result = [num for num in numbers if num > threshold]

for num in result:
    print(num)