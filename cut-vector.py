def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    min_diff = float("inf")
    cut_index = -1

    if n == 1:
        print(vector[0])
        print(vector[0])
        exit()

    for i in range(n):
        left_sum += vector[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    print(*vector[: cut_index + 1], sep='\n')
    print(*vector[cut_index + 1 :], sep='\n')


vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except:
        break

if len(vector) == 1:
    print(vector[0])
    print(vector[0])
    exit()

cut_vector(vector)