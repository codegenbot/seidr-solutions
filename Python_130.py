```
def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [1, 3]
    else:
        sequence = [1, 3]
        while len(sequence) < n + 1:
            if len(sequence) % 2 == 0:
                sequence.append(1 + (len(sequence) // 2))
            else:
                last_even_index = len(sequence) - 1
                sequence.append(sequence[last_even_index] + sequence[last_even_index - 1] + sequence[last_even_index - 2])
        return sequence