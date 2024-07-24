return "".join(
    [(group[2] + group[:2]) if len(group) == 3 else group for group in s.split(" ")]
)