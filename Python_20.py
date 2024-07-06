```
def find_closest_elements(numbers: list[float]) -> tuple[float, float]:
    closest_pair = (numbers[0], numbers[1])
    min_diff = abs(numbers[0] - numbers[1])

    for i in range(len(numbers) - 1):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])

    return closest_pair