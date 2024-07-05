def decode_cyclic():
    import sys

    input = sys.stdin.read().strip()
    groups = [input[(3 * i) : (3 * i + 3)] for i in range((len(input) + 2) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    print("".join(groups))


decode_cyclic()