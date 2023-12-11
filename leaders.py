[PYTHON]
def leaders(arr):
    result = []
    current_leader = arr[-1]
    for i in range(len(arr)-2, -1, -1):
        if arr[i] >= current_leader or (arr[i] == current_leader and not result):
            result.append(current_leader)
            current_leader = arr[i]
    return result
[/PYTHON]
[TESTS]
# Test case 1:
assert leaders([7, 2, 543, 558, 182, 288, 762, 622]) == [2, 762, 622]
# Test case 2:
assert leaders([7, 2, 543, 558, 182, 288, 762, 622, 762]) == [2, 762, 762]
# Test case 3:
assert leaders([7, 2, 543, 558, 182, 288, 762, 622, 762, 622]) == [2, 762, 762, 622]
[/TESTS]
