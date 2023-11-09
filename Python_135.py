def can_arrange(arr, k):
    """
    Create a function which returns True if the given array can be rearranged
    to form a sequence which is strictly increasing from its first element up
    to its k-th element, followed by a sequence which is strictly decreasing
    from its k-th element up to its last element. In this case, the sequence
    from the first element up to the k-th element is called a strictly increasing
    sequence, and the sequence from the k-th element up to the last element is
    called a strictly decreasing sequence.

    Examples:
        can_arrange([1,2,3,4,5], 2) = True
        can_arrange([1,2,3,4,5], 3) = False
        can_arrange([2,1,3,4,5], 2) = False
    """
    if len(arr) == 0:
        return -1

    inc = arr[:k]
    dec = arr[k:]

    inc.sort()
    dec.sort(reverse=True)

    return inc == arr[:k] and dec == arr[k:]
