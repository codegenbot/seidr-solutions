numbers = list(map(int, input().split()))
def rolling_max(numbers):
    return [max(numbers[i:i+3]) for i in range(len(numbers)-2)]
print(rolling_max(numbers))