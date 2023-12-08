[PYTHON]
def cut_vector(my_list):
    left = []
    right = []
    for i in range(len(my_list)):
        if my_list[i] % 2 == 0:
            left.append(my_list[i])
        else:
            right.append(my_list[i])
    return left, right
[/PYTHON]
[TESTS]
# Test case 1:
assert cut_vector([]) == ([], [])
# Test case 2:
assert cut_vector([1, 3, 5, 7]) == ([1, 3, 5, 7], [])
# Test case 3:
assert cut_vector([1, 3, 5, 7, 9]) == ([1, 3, 5, 7], [9])
# Test case 4:
assert cut_vector([1, 2, 3, 4, 5, 6, 7]) == ([1, 3, 5, 7], [2, 4, 6])
[/TESTS]
