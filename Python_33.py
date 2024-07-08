def sort_third(l: list):
    return [
        (
            val
            if i % 3 != 0
            else l[i // 3 * 3 + (i % 3) * 3:i // 3 * 3 + (i + 1) % 3 * 3][0]
            if i < len(l) - 2
            else None 
        )
        for i, val in enumerate(l)
    ]