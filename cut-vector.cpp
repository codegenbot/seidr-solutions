[PYTHON]
def get_two_resulting_subvectors(vector):
    left = 0
    right = 0
    for i in range(1, len(vector)):
        if vector[i] - vector[left] > vector[right] - vector[i]:
            left = i
        else:
            right = i
    return [vector[:left], vector[left:]]
[/PYTHON]
[TESTS]
# Test case 1:
assert get_two_resulting_subvectors([1, 2, 3, 4, 5]) == [[1, 2, 3], [4, 5]]
# Test case 2:
assert get_two_resulting_subvectors([1, 10, 100, 1000, 10000]) == [[1, 10, 100, 1000], [10000]]
# Test case 3:
assert get_two_resulting_subvectors([1, 2, 3, 4, 5, 6, 7]) == [[1, 2, 3, 4, 5], [6, 7]]
[/TESTS]
