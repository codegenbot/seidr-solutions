```python

def cut_vector(vector):
    n = len(vector)
    
    # Calculate the sum of all elements in the vector
    total_sum = sum(vector)
    
    # Initialize the minimum difference and the index where the cut should be made
    min_diff = float('inf')
    cut_index = -1
    
    # Iterate through all possible cut indexes
    for i in range(1, n):
        # Calculate the sum of elements on the left side of the cut
        left_sum = sum(vector[:i])
        
        # Calculate the sum of elements on the right side of the cut
        right_sum = total_sum - left_sum
        
        # Calculate the difference between the sums
        diff = abs(left_sum - right_sum)
        
        # Update the minimum difference and the cut index if the current difference is smaller
        if diff < min_diff:
            min_diff = diff
            cut_index = i
            
    # Return the two resulting subvectors
    return vector[:cut_index], vector[cut_index:]

# Read the input vector from the user
vector = []
num_elements = int(input())
for _ in range(num_elements):
    element = int(input())
    vector.append(element)

# Call the cut_vector function and print the two resulting subvectors
subvector1, subvector2 = cut_vector(vector)
for element in subvector1:
    print(element)
for _ in subvector2:
    print(0)

```