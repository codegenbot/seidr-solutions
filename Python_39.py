def nth_fibonacci(n):
    sequence = [0,1]
    while len(sequence) < n:
        sequence.append(sum(sequence[-2:]))
    return sequence[-1]