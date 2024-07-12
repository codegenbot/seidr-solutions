numbers = [2, 7, 3, 1, 5, 2, 6]
def rolling_max(numbers):
    result = []
    for i in range(len(numbers)):
        current_max = max(numbers[i:i+3])
        result.append(current_max)
    return result
print(rolling_max(numbers))