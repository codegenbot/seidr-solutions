Here is the completed code:

def pluck(arr):
    even_nodes = [(node, i) for i, node in enumerate(arr) if node % 2 == 0]
    if not even_nodes:
        return []
    smallest_node = min(even_nodes)
    return [smallest_node[0], smallest_node[1]]