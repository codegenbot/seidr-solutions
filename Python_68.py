def pluck(arr):
    even_nodes = [(node, i) for i, node in enumerate(arr) if node % 2 == 0]
    if not even_nodes:
        return []
    smallest_value_node = min(even_nodes)
    return [smallest_value_node[0], smallest_value_node[1]]