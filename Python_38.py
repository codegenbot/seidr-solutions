return "".join(
    [(group[-1] + group[:2]) if len(group) == 3 else group for group in groups]
)