# Read input from user
vector = []
for num in map(int, input().strip().split()):
    vector.append(num)

# Call the function and print the result
result = cut_vector(vector)
for subvector in result:
    print(*subvector)