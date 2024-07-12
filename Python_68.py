def pluck(arr):
    even_nodes = [node for node in arr if node % 2 == 0]
    if not even_nodes:
        return []
    smallest_even = min(even_nodes)
    indices = [i for i, node in enumerate(arr) if node == smallest_even]
    return [smallest_even, min(indices)]