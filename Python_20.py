def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return tuple(
        sorted((x for x in numbers for _ in range(len(numbers))))[1:-1].most_common(2)[
            0
        ][0],
        sorted((x for x in numbers for _ in range(len(numbers))))[1:-1].most_common(2)[
            -1
        ][0],
    )