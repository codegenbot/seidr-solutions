return "_".join(
    [group if len(group) <= 1 else "_" + group + "_" for group in text.split()]
)