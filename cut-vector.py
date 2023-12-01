def cut_vector(vector):
    n = len(vector)
    prefix_sum = [0] * (n + 1)
    for i in range(1, n + 1):
        prefix_sum[i] = prefix_sum[i - 1] + vector[i - 1]
    total_sum = prefix_sum[n]

    min_difference = float("inf")
    cutting_point = 0

    for i in range(1, n + 1):
        left_sum = prefix_sum[i]
        right_sum = total_sum - prefix_sum[i]
        difference = abs(left_sum - right_sum)

        if difference < min_difference:
            min_difference = difference
            cutting_point = i

    return vector[:cutting_point], vector[cutting_point:]


vector = []
while True:
    try:
        num = input()
        vector.append(int(num))
    except EOFError:
        break

left_vector, right_vector = cut_vector(vector)
for num in left_vector:
    print(num)
for num in right_vector:
    print(num)