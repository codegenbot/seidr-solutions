def get_max_triples(n):
    # Calculate the number of triangles in a triangle-free graph with n nodes
    count = (n * (n - 1)) // 2
    return count