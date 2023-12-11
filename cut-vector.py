def cut_vector(vec):
    n = len(vec)
    if n == 1:
        return vec[0], 0
    left = 0
    right = n - 1
    while left < right:
        mid = (left + right) // 2
        if vec[mid] > vec[mid + 1]:
            right = mid
        else:
            left = mid + 1
    return vec[:left], vec[left:]