def decode_cyclic(groups):
    groups = [group[-1] + group[:-1] if len(group) == 3 else group for group in groups]
    return (
        "".join(groups)
        if all(isinstance(group, str) and len(group) == 3 for group in groups)
        else None
    )


print(decode_cyclic(input("Enter groups separated by spaces: ").split()))