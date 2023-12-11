def cut_vector(vector):
    left = 0
    right = len(vector) - 1
    while left < right:
        mid = (left + right) // 2
        if vector[mid] >= vector[mid - 1]:
            right = mid - 1
        else:
            left = mid + 1
    return [vector[:right], vector[left:]]