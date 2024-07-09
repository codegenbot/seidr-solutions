def pluck(arr):
    even_values = [node for node in arr if node % 2 == 0]
    if not even_values:
        return []
    smallest_value_index = min(
        (i for i, value in enumerate(even_values) if value == smallest_even), default=-1
    )
    return [smallest_even, smallest_value_index]


smallest_even = min((value for value in arr if value % 2 == 0), default=None)