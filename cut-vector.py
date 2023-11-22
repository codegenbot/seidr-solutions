def cut_vector(vector):
    def find_cut_spot(vector, n):
        left_sum = 0
        right_sum = sum(vector)
        min_diff = float("inf")
        cut_spot = 0

        for i in range(n):
            left_sum += vector[i]
            right_sum -= vector[i]
            diff = abs(left_sum - right_sum)

            if diff < min_diff:
                min_diff = diff
                cut_spot = i + 1

        return cut_spot

    n = len(vector)
    cut_spot = find_cut_spot(vector, n)

    subvector_1 = vector[:cut_spot]
    subvector_2 = vector[cut_spot:] + [0]

    return subvector_1, subvector_2


# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except EOFError:
        break

# Call the function and print the result
subvector_1, subvector_2 = cut_vector(vector)
for num in subvector_1:
    print(num)
for num in subvector_2:
    print(num)