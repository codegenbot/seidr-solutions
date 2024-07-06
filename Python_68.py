def pluck(arr):
    even_nodes = [(x, i) for i, x in enumerate(arr) if x % 2 == 0]
    if not even_nodes:
        return []
    smallest_even_node = min(even_nodes)
    return [smallest_even_node[0], smallest_even_node[1]]