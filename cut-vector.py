def cut_vector(vector):
    # Sort the vector in ascending order
    sorted_vector = sorted(vector)
    
    # Find the index of the first element that is not equal to its previous element
    cut_index = next((i for i, x in enumerate(sorted_vector[1:]) if x != sorted_vector[i]), len(sorted_vector))
    
    # Split the vector into two subvectors based on the index found
    left_subvector = sorted_vector[:cut_index]
    right_subvector = sorted_vector[cut_index:]
    
    return left_subvector, right_subvector
