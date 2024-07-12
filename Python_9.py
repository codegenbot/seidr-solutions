numbers = list(map(int, input().split(",")))
def rolling_max(numbers):
    result = []
    for i in range(len(numbers)):
        current_max = max(numbers[i:i+3])
        result.append(current_max)
    return result
print(rolling_max(numbers))