def pluck(arr):
    even_nodes = [(node, i) for i, node in enumerate(arr) if node % 2 == 0]
    return [] if not even_nodes else min(even_nodes)[::-1]