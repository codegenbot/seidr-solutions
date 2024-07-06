def sort_third(l: list):
    multiples_of_three = sorted([i for i in l if i % 3 == 0])
    result = []
    multiple_three_count = 0
    for i in range(len(l)):
        if i % 3 != 0:
            result.append(i)
        else:
            result.append(multiples_of_three[multiple_three_count])
            multiple_three_count += 1
    return tuple(result)