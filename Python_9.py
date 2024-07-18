numbers = list(map(int, input().split()))

def rolling_max(numbers):
    result = []
    for i in range(len(numbers)-2):
        result.append(max(numbers[i:i+3]))
    return result

print(rolling_max(numbers))