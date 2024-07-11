```
def rolling_max(input_str: str) -> list:
    input_str = "".join(filter(str.isdigit, input_str))

    numbers = []
    for num in input_str.split():
        if not num.isdigit():
            return []
        numbers.append(int(num))

    if len(numbers) <= 1:
        return [0]

    result = []
    max_so_far = current_max = numbers[0]
    for num in numbers[1:]:
        if num > current_max:
            current_max = num
        result.append(current_max)
        max_so_far = max(max_so_far, current_max)

    while len(result) < len(numbers):
        result.append(max_so_far)
    return result