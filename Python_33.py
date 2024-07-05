```
def sort_third(l: list):
    result = []
    for i in range(len(l)):
        if i % 3 != 0:
            result.append(i)
        else:
            chunk_size = (i // 3) * 3 + 1
            non_zeros = [x for x in l[:chunk_size] if x % 3 != 0]
            if non_zeros:
                result.append(non_zeros[-1])
            else:
                result.append(i)
    return tuple(result)