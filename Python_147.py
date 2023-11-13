
def get_max_triples(n):
    """
    You are given a positive integer n. You have to create an integer array a of length n.
        For each i (1 ≤ i ≤ n), the value of a[i] = i * i - i + 1.
        Return the number of triples (a[i], a[j], a[k]) of a where i < j < k, 
    and a[i] + a[j] + a[k] is a multiple of 3.

    Example :
        Input: n = 5
        Output: 1
        Explanation: 
        a = [1, 3, 7, 13, 21]
        The only valid triple is (1, 7, 13).
    pass
    if n < 3:
        return 0
    if n == 3:
        return 1
    a = [i * i - i + 1 for i in range(1, n + 1)]
    b = [i * i - i + 1 for i in range(1, n + 1)]
    c = 0
    for i in range(n):
        for j in range(i + 1, n):
            for k in range(j + 1, n):
                if (a[i] + a[j] + a[k]) % 3 == 0:
                    c += 1
    return c


def check(func):
    assert func(3) == 1
    assert func(5) == 1
    assert func(100) == 53361
    assert func(500) == 1254267
    assert func(1000) == 2617290
    assert func(5000) == 131179355


check(get_max_triples)
    """
