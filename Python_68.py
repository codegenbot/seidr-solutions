def pluck(arr):
    even_nodes = [(node, i) for i, node in enumerate(arr) if node % 2 == 0]
    if not even_nodes:
        return []
    min_even_node = min(even_nodes)
    return [min_even_node[0], min_even_node[1]]