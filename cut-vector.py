# Read input vector from user
vector = list(map(int, input().split()))

# Find the index to cut the vector
min_diff = float("inf")
cut_index = -1
for i in range(1, len(vector)):
    diff = abs(sum(vector[:i]) - sum(vector[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

# Return the two resulting subvectors
print(vector[:cut_index])
print(vector[cut_index:])