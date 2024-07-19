return "".join(
    [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
)