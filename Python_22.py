```
def filter_integers(values: list[any]) -> list[int]:
    if not all(isinstance(x, (int, str)) for x in values):
        raise ValueError("Input should be a list of integers and strings")
    return [value for value in values if isinstance(value, int)]