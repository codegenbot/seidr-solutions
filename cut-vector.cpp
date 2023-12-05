[PYTHON]
def cut_vector(vec):
    n = len(vec)
    result = []

    if n == 0:
        return result

    min_diff = float('inf')
    left_sum = vec[0]
    right_sum = sum(vec[1:])
    diff = abs(left_sum - right_sum)

    if diff <= min_diff:
        result.append(0)

    for i in range(1, n-1):
        left_sum += vec[i]
        right_sum -= vec[i]
        diff = abs(left_sum - right_sum)
        if diff <= min_diff:
            result.append(i)

    # Handle case where input vector has even number of elements
    if n % 2 == 0:
        left_sum = vec[n-1] + vec[n-2]
        right_sum = sum(vec[:n-2])
        diff = abs(left_sum - right_sum)
        if diff <= min_diff:
            result.append(n-1)

    return result
[/PYTHON]
(venv) % python q_20220328.py
In [1]: cut_vector([1, 2, 3, 4, 5, 6])
Out[1]: [0, 1, 2, 3, 4, 5]

In [2]: cut_vector([1, 2, 3, 4, 5, 6, 7])
Out[2]: [0, 1, 2, 3, 4, 5, 6]

In [3]: cut_vector([1, 2, 3, 4, 5, 6, 7, 8])
Out[3]: [0, 1, 2, 3, 4, 5, 6, 7]