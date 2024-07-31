def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return tuple(
        sorted((y - x for x in numbers for y in numbers if x < y), reverse=True)[:2][
            ::-1
        ]
    )