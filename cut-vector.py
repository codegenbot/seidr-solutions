def cut_vector(vector):
    # find the spot where, if you cut the vector, the numbers on both sides are either equal, or the difference is as small as possible
    left = 0
    right = len(vector) - 1
    while left < right:
        mid = (left + right) // 2
        if vector[mid] <= vector[mid-1]:
            right = mid - 1
        else:
            left = mid + 1
    return [vector[:left], vector[left:]]