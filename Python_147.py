
# Returns the number of triples in a triangle-free graph
def get_max_triples(n):
    # Calculate the number of triangles in a complete graph with n nodes
    num_triangles = n * (n - 1) // 2
    # Calculate the number of triples by subtracting the number of triangles from the total number of possible triples
    return (n * (n - 1) * (n - 2)) // 6 - num_triangles

