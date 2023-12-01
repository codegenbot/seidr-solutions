def cut_vector(vector):
    min_diff = float("inf")
    cut_index = 0
    for i in range(1, len(vector)):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    return vector[:cut_index], vector[cut_index:]


# Read input from user
vector = []
while True:
    try:
        line = input()
        if line:
            vector.append(int(line))
        else:
            break
    except EOFError:
        break

# Call the function and print the output
left, right = cut_vector(vector)
for num in left:
    print(num)
for num in right:
    print(num)