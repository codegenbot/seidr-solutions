def reverse_delete(s, c):
    return (
        "".join([i for i in s if i not in c]),
        "".join(s).lower() == "".join(s)[::-1].lower(),
    )