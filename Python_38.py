def decode_cyclic(s: str):
    groups = [s[i] for i in range(0, len(s), 2)] + [s[i:] for i in range(0, len(s), 3)][
        0
    ]
    return "".join(
        "".join(group)
        for group in [
            (
                groups[1 : i + 3][::-1]
                if len(groups[: i + 3]) == 3
                else groups[: i + 3][:-1][::-1] + groups[: i + 3][-1:]
            )
            for i in range(len(groups))
        ]
    )