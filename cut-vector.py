def cut_vector(vec):
    left = 0
    right = len(vec) - 1
    while left < right:
        mid = (left + right) // 2
        if vec[mid] == vec[mid-1]:
            return [vec[:mid], vec[mid:]]
        elif abs(vec[mid] - vec[mid-1]) <= abs(vec[mid+1] - vec[mid]):
            left = mid + 1
        else:
            right = mid - 1
    return [vec[:right], vec[right:]]