def cut_vector(vector):
    sum_vector = sum(vector)
    half_sum = sum_vector // 2
    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        if current_sum == half_sum or current_sum == half_sum + num:
            return vector[: i + 1], vector[i + 1 :]
    return vector, []

vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except:
        break

subvector1, subvector2 = cut_vector(vector)
for num in subvector1:
    print(num)
for num in subvector2:
    print(num)