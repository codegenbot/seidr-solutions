[PYTHON]
def pluck(arr):
    smallest_even = INT_MAX
    smallest_index = -1
    for i in range(len(arr)):
        if arr[i] % 2 == 0 and arr[i] < smallest_even:
            smallest_even = arr[i]
            smallest_index = i
    return [smallest_even, smallest_index]

def issame(a, b):
    if len(a) != len(b):
        return False
    for i in range(len(a)):
        if a[i] != b[i]:
            return False
    return True

assert issame(pluck([7, 9, 7, 1]), [])
