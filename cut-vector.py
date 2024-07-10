Here is the Python solution for the problem:

def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    for i in range(len(vector)):
        right_sum = total_sum - left_sum
        if abs(left_sum - right_sum) <= min(left_sum, right_sum):
            return vector[:i+1], vector[i:]
    return None

# Testing the function with given inputs
print(cut_vector([1]))  # Should print ([1], [0])
print(cut_vector([1, 10]))  # Should print ([1], [10, 0])
print(cut_vector([1, 100]))  # Should print ([1], [100, 0])
print(cut_vector([1, 1000]))  # Should print ([1], [1000, 0])
print(cut_vector([1, 10000]))  # Should print ([1], [10000, 0])