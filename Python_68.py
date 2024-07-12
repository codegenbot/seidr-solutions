def pluck(arr):
    even_nodes = [(node, i) for i, node in enumerate(arr) if node % 2 == 0]
    if not even_nodes:
        return []
    smallest_value = min(node for node, _ in even_nodes)
    smallest_values = [node for node, _ in even_nodes if node == smallest_value]
    result = [
        (smallest_value, i)
        for _, i in sorted(
            [(node, i) for node, i in zip(smallest_values, even_nodes)],
            key=lambda x: x[1],
        )
    ]
    return result[0] if result else []