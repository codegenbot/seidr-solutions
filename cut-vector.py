def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum

    for i in range(1, len(vector)):
        left_sum += vector[i - 1]
        right_sum -= vector[i - 1]

        if left_sum == right_sum or abs(left_sum - right_sum) == 1:
            return vector[:i], vector[i:]

    return vector, []


vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except:
        break

result1, result2 = cut_vector(vector)
for num in result1:
    print(num)
for num in result2:
    print(num)