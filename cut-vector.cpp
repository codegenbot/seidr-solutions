
[PYTHON]
def cut_vector(v):
    n = len(v)
    if n == 1:
        return v, []
    
    # Initialize variables
    min_diff = float('inf')
    cut_index = -1
    
    # Iterate over elements in the vector
    for i in range(n):
        # Calculate the difference between the current element and the last element
        diff = abs(v[i] - v[n-1])
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    
    # Cut the vector at the index found above
    subvector_1 = v[:cut_index+1]
    subvector_2 = v[cut_index+1:]
    
    return subvector_1, subvector_2
[/PYTHON]
[TESTS]
# Test case 1:
v = [1, 0]
assert cut_vector(v) == ([1], [0])
# Test case 2:
v = [1, 10]
assert cut_vector(v) == ([1], [10])
# Test case 3:
v = [1, 100]
assert cut_vector(v) == ([1], [100])
# Test case 4:
v = [1, 1000]
assert cut_vector(v) == ([1], [1000])
# Test case 5:
v = [1, 10000]
assert cut_vector(v) == ([1], [10000])
[/TESTS]
