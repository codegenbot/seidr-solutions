Here is the completed Python code:

def cut_vector(vector):
    n = len(vector)
    for i in range(n-1):
        left_sum = sum(vector[:i+1])
        right_sum = sum(vector[i+1:])
        if abs(left_sum - right_sum) == 0:
            return [vector[:i+1], vector[i+1:]]
    return [vector, []]

# test cases
print(cut_vector([1]))  # should print ([1], [])
print(cut_vector([1, 10]))  # should print ([1, 10], [])
print(cut_vector([1, 100]))  # should print ([1, 100], [])
print(cut_vector([1, 1000]))  # should print ([1, 1000], [])
print(cut_vector([1, 10000]))  # should print ([1, 10000], [])