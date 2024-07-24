def pluck(arr):
    evens = [node for node in arr if node % 2 == 0]
    if not evens:
        return []
    smallest_value = min(evens)
    return [
        [smallest_value, i] for i, node in enumerate(arr) if node == smallest_value
    ][0]