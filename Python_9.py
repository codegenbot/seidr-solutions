```
def rolling_max(numbers):
    result = []
    max_so_far = numbers[0]
    result.append(max_so_far)
    for num in numbers[1:]:
        if num > max_so_far:
            max_so_far = num
        result.append(max_so_far)
    return result