def cut_vector(vector):
    diff = float("inf")
    index = 0
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        if left_sum == right_sum:
            return vector[:i], vector[i:]
        elif abs(left_sum - right_sum) < diff:
            diff = abs(left_sum - right_sum)
            index = i
    return vector[:index], vector[index:]


# Test cases
print(cut_vector([1]))  # (1,)
print(cut_vector([1, 0]))  # ([1], [0])
print(cut_vector([1, 10]))  # ([1], [10])
print(cut_vector([1, 100]))  # ([1], [100])
print(cut_vector([1, 1000]))  # ([1], [1000])
print(cut_vector([1, 10000]))  # ([1], [10000])