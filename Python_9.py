numbers = list(map(int, input().split()))
print([max(numbers[i:i+3]) for i in range(len(numbers)-2)])