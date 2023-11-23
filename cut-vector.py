def cut_vector(vector):
    total_sum = sum(vector)
    min_diff = abs(total_sum)
    left_index = right_index = -1

    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        diff = abs((total_sum - current_sum) - current_sum)
        if diff < min_diff:
            min_diff = diff
            left_index = i + 1
            right_index = i + 2
        elif (total_sum - current_sum) == current_sum:
            right_index = i + 2

    return vector[:left_index], vector[right_index:]

vector = [int(num) for num in input().split()]

subvector1, subvector2 = cut_vector(vector)
print(*subvector1, sep='\n')
print(*subvector2, sep='\n')