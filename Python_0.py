def has_close_elements(numbers: List[float], threshold: float) -> bool:
    return any(abs(a - b) <= threshold for i, (a,) in enumerate(numbers) for j, b in enumerate(list(numbers)[i+1:]))