def pluck(arr):
    even_nodes = [node for node in arr if node % 2 == 0]

    if not even_nodes:
        return []

    min_even_node = min(even_nodes)
    min_index = arr.index(min_even_node)

    return [min_even_node, min_index]