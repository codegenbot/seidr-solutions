def cut_vector(vector):
    n = len(vector)
    if n == 1:
        return vector[0], 0
    left = 0
    right = n - 1
    while left < right:
        mid = (left + right) // 2
        if vector[mid] > vector[mid + 1]:
            right = mid
        else:
            left = mid + 1
    return vector[:left], vector[left:]