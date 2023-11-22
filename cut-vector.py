def cut_vector(vector):
    total_sum = sum(vector)
    half_sum = total_sum // 2

    current_sum = 0
    index = 0
    for i, num in enumerate(vector):
        current_sum += num
        if current_sum >= half_sum:
            index = i
            break

    if current_sum == half_sum:
        return vector[: index + 1], vector[index + 1 :]
    elif current_sum - half_sum < half_sum - (current_sum - num):
        return vector[: index + 1], vector[index + 1 :]
    else:
        return vector[:index], vector[index:]