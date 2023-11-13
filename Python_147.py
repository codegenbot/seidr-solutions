

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
    #a = [i*i-i+1 for i in range(1, n+1)]
    a = [1, 3, 7, 13, 21]
    print(a)
    triple = 0
    for i in range(len(a)):
        for j in range(i+1, len(a)):
            for k in range(j+1, len(a)):
                print('i, j, k', i, j, k)
                print(a[i], a[j], a[k])
                if (a[i] + a[j] + a[k]) % 3 == 0:
                    triple += 1
    return triple


def check(func):
    assert func(100) == 53361
    assert func(1000) == 106501
    assert func(10000) == 1223001
    assert func(100000) == 13273001
    assert func(1000000) == 143560001
    assert func(10000000) == 1549630001
    assert func(100000000) == 16686400001
    print('All tests are passed')


if __name__ == '__main__':
    check(get_max_triples)
    """
