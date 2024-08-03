def pluck(arr):
    even_nodes = [i for i in enumerate(arr) if arr[i[1]] % 2 == 0]
    if not even_nodes:
        return []
    return [even_nodes[0][1], even_nodes[0][0]]