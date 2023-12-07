def cut_vector(v):
    n = len(v)
    if n == 1:
        return v[0], 0
    elif n == 2:
        return v[0], v[1]
    else:
        left = []
        right = []
        for i in range(n):
            if i < n // 2:
                left.append(v[i])
            else:
                right.append(v[i])
        diff_left = max(left) - min(left)
        diff_right = max(right) - min(right)
        if diff_left <= diff_right:
            return left, 0
        else:
            return right, 0