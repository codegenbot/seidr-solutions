```
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    closest_pair = (numbers[0], numbers[1])
    min_distance = abs(closest_pair[1] - closest_pair[0])

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            current_distance = abs(numbers[j] - numbers[i])
            if current_distance < min_distance:
                min_distance = current_distance
                closest_pair = (numbers[i], numbers[j])

    return closest_pair