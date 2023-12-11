[PYTHON]
def get_leaders(arr):
    leaders = []
    for i in range(len(arr)-1, -1, -1):
        if arr[i] >= arr[i+1]:
            leaders.append(arr[i])
    return leaders
[/PYTHON]
[TESTS]
# Test case 1:
assert get_leaders([]) == []
# Test case 2:
assert get_leaders([1]) == [1]
# Test case 3:
assert get_leaders([1, 2, 3, 4, 3, 2, 1]) == [4, 3, 2, 1]
[/TESTS]
