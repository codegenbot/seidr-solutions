return tuple(
    i if i % 2 == 0 else j
    for i, j in zip(
        even + [0] * (max_len - len(even)), odd + [0] * (max_len - len(odd))
    )
)