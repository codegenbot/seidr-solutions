def fibfib(n: int):
    if n == 0 or n == 1:
        return 0
    elif n == 2:
        return 1
    fibfib_sequence = [0, 0, 1]
    for i in range(3, n + 1):
        fibfib_sequence.append(
            fibfib_sequence[-1] + fibfib_sequence[-2] + fibfib_sequence[-3]
        )
    return fibfib_sequence[n]