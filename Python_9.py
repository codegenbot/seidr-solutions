numbers = list(map(int, input().split()))
def rolling_max(numbers):
    max_values = [max(numbers[i:i+3]) for i in range(len(numbers)-2)]
    return max_values
output = rolling_max(numbers)
print(output)