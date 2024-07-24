def encode_cyclic(s: str):
    return "".join(
        [
            (
                s[i : i + 3][1:] + s[i : i + 3][0]
                if len(s[i : i + 3]) == 3
                else s[i : i + 3]
            )
            for i in range((len(s) + 2) // 3)
        ]
    )


def decode_cyclic(s: str):
    return "".join(
        [
            (
                "".join(
                    [s[3 * i % len(s) : 3 * (i + 1) % len(s)][-1]]
                    + [s[3 * i % len(s) : 3 * (i + 1) % len(s)][:-1]]
                )
                if len(s[3 * i % len(s) : 3 * (i + 1) % len(s)]) == 3
                else s[3 * i % len(s) : 3 * (i + 1) % len(s)]
            )
            for i in range((len(s) + 2) // 3)
        ]
    )