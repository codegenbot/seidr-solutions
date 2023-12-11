def get_cut_index(vector):
    # Calculate the difference between each pair of adjacent elements
    diffs = np.diff(vector)
    
    # Find the index where the difference is minimum
    min_idx = np.argmin(diffs)
    
    # Split the vector into two subvectors at the minimum index
    return vector[:min_idx+1], vector[min_idx+1:]

# Test cases
print(get_cut_index([1, 0])) # [1], [0]
print(get_cut_index([1, 10])) # [1], [10]
print(get_cut_index([1, 100])) # [1], [100]
print(get_cut_index([1, 1000])) # [1], [1000]
print(get_cut_index([1, 10000])) # [1], [10000]