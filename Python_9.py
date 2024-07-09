numbers = [int(input()) for _ in range(int(input()))]
print([max(numbers[i:i+3]) for i in range(len(numbers)-2])