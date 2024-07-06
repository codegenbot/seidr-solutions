def decode_cyclic(s):
    try:
        decoded_groups = []
        for i in range((len(s) + 2) // 3):
            group = s[(3 * i) : min((3 * i + 3), len(s))]
            if len(group) == 3:
                group = group[-1:] + group[:-1]
            decoded_groups.append(group)
        return "".join(decoded_groups)
    except (ValueError, IndexError):
        print("Invalid input")
        return None