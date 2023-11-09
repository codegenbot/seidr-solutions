

def sort_third(l: list):
    """This function takes a list and returns a list that is identical to its argument in the indices that are not
    divisible by three, while its values at the indices that are divisible by three are equal to the values of the
    corresponding indices of its argument, but sorted.
    """

    for i in range(0, len(l)):
        if i % 3 == 0:
            l[i:i+3] = sorted(l[i:i+3])
    return l


def check(sort_third):
    assert tuple(sort_third([5, 6, 3, 4, 8, 9, 2, 1])) == tuple([3, 5, 4, 6, 8, 9, 1, 2]) # не проходит
    assert tuple(sort_third([1, 2, 3, 4, 5, 6, 7, 8, 9])) == tuple([1, 2, 3, 4, 5, 6, 7, 8, 9])
    assert tuple(sort_third([7, 2, 8, 4, 9, 5, 1, 3, 6])) == tuple([2, 7, 4, 8, 5, 9, 1, 3, 6])
    assert tuple(sort_third([3, 5, 4, 1, 6, 7, 8, 9, 2])) == tuple([1, 5, 4, 3, 6, 7, 8, 9, 2])
    assert tuple(sort_third([1, 2, 3])) == tuple([1, 2, 3])
    assert tuple(sort_third([1, 2, 3, 4])) == tuple([1, 2, 3, 4])
    assert tuple(sort_third([1, 2, 3, 4, 5])) == tuple([1, 2, 3, 4, 5])
    assert tuple(sort_third([1, 2, 3, 4, 5, 6])) == tuple([1, 2, 3, 4, 5, 6])
    assert tuple(sort_third([1, 2, 3, 4, 5, 6, 7])) == tuple([1, 2, 3, 4, 5, 6, 7])
    assert tuple(sort_third([1, 2, 3, 4, 5, 6, 7, 8])) == tuple([1, 2, 3, 4, 5, 6, 7, 8])
    assert tuple(sort_third([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])) == tuple([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])
    assert tuple(sort_third([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11])) == tuple([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11])
    assert tuple(sort_third([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12])) == tuple([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12])
    assert tuple(sort_third([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13])) == tuple([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13])
    assert tuple(sort_third([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14])) == tuple([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14])
    assert tuple(sort_third([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15])) == tuple([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15])
    assert tuple(sort_third([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16])) == tuple([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16])
    assert tuple(sort_third([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17])) == tuple([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17])
    assert tuple(sort_third([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18])) == tuple([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18])
    assert tuple(sort_third([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19])) == tuple([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19])


if __name__ == '__main__':
    check(sort_third)
