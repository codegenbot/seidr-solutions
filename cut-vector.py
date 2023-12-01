def cut_vector(vector):
    n = len(vector)
    if n == 0:
        return [], []
    if n == 1:
        return vector, [0]

    diff = abs(sum(vector))
    index = 0
    for i in range(1, n):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        new_diff = abs(left_sum - right_sum)
        if new_diff < diff:
            diff = new_diff
            index = i

    return vector[:index], vector[index:]


# Read input from user
vector = []
while True:
    try:
        line = input()
        if line.strip() == "":
            break
        vector.append(int(line))
    except EOFError:
        break

# Print the resulting subvectors
left, right = cut_vector(vector)
for num in left:
    print(num)
for num in right:
    print(num)