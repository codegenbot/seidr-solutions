def pluck(arr):
    even_nodes = [(node, idx) for idx, node in enumerate(arr) if node % 2 == 0]
    if not even_nodes:
        return []
    smallest_even_node = min(even_nodes)
    return [smallest_even_node[0], smallest_even_node[1]]