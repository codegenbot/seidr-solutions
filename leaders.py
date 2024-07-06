def leaders(vector):
    result = []
    left_ptr = 0
    right_ptr = len(vector) - 1
    while left_ptr < right_ptr:
        if vector[right_ptr] >= vector[left_ptr]:
            result.append(vector[right_ptr])
            right_ptr -= 1
        else:
            left_ptr += 1
    return result