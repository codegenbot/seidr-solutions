def get_max_triples(n):
   # Initialize a list to store the triples that sum up to a multiple of 3
    triples = []
    
    # Iterate over the range of numbers from 1 to n
    for i in range(1, n + 1):
        # Check if the current number is a multiple of 3
        if i % 3 == 0:
            # If it is, add it to the list of triples
            triples.append(i)
    
    return triples