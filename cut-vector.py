# Example input vector
arr = [1, 2, 3, 4, 5]

# Find cut_index based on the problem logic
cut_index = min(range(len(arr)-1), key=lambda i: abs(sum(arr[:i+1]) - sum(arr[i+1:]))

# Split the vector at cut_index
subvector1 = arr[:cut_index+1]
subvector2 = arr[cut_index+1:]

# Output the resulting subvectors
print(subvector1)
print(subvector2)