def generate_integers(a, b):
    return sorted(
        [
            i
            for i in range(min(a, b), max(a, b) + 1)
            if str(i).endswith("0")
            or str(i).endswith("2")
            or str(i).endswith("4")
            or str(i).endswith("6")
            or str(i).endswith("8")
        ]
    )