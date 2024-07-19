def sort_third(l: list) -> list:
    l += [0] * (3 - len(l) % 3)
    return [
        sorted((sublist[i], sublist[i+1], sublist[i+2]), key=lambda x: x[2], reverse=True)
        for sublist in [
            l[i : i + 3] for i in range(0, len(l), 3)
        ]
    ]