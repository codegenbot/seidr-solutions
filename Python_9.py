def rolling_max(input_numbers):
    result = []
    for i in range(len(input_numbers)):
        max_num = max(input_numbers[max(0, i-1):min(i+2, len(input_numbers))])
        result.append(max_num)
    return result

input_numbers = list(map(int, input().split()))
result = rolling_max(input_numbers)
print(result)