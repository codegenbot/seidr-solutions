def get_cutting_spot(vector):
    # find the spot where the numbers on both sides are either equal or the difference is as small as possible
    for i in range(1, len(vector)):
        if vector[i-1] == vector[i]:
            return i
        elif vector[i-1] > vector[i]:
            return i-1
        else:
            pass
    return None

def cut_vector(vector):
    cutting_spot = get_cutting_spot(vector)
    if cutting_spot is not None:
        return (vector[:cutting_spot], vector[cutting_spot:])
    else:
        return (None, None)

# test cases
assert cut_vector([1, 0]) == ([1], [0])
assert cut_vector([1, 10]) == ([1], [10])
assert cut_vector([1, 100]) == ([1], [100])
assert cut_vector([1, 1000]) == ([1], [1000])
assert cut_vector([1, 10000]) == ([1], [10000])