def cut_vector(vector):
    left_sum = 0
    for i in range(len(vector)):
        right_sum = sum(vector[i + 1 :])
        if left_sum == right_sum:
            return [vector[: i + 1], vector[i + 1 :]]
        elif abs(left_sum - right_sum) < abs(left_sum - right_sum):
            return [vector[: i + 1], vector[i + 1 :]]
    return [vector, []]


# test the function
print(cut_vector([1]))
print(cut_vector([1, 10]))
print(cut_vector([1, 100]))
print(cut_vector([1, 1000]))
print(cut_vector([1, 10000]))