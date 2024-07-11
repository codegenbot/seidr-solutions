def rolling_max(input_str: str) -> list[int]:
    input_str = "".join(filter(str.isdigit, input_str)).lstrip("0")

    if not input_str:
        return []

    numbers = [int(num) for num in input_str.split()]

    result = []
    max_so_far = current_max = numbers[0]
    for num in numbers[1:]:
        if num > current_max:
            result.append(current_max)
            current_max = num
        else:
            result.append(current_max)

        max_so_far = max(max_so_far, current_max)

    while len(result) < len(numbers):
        result.append(max_so_far)

    return result