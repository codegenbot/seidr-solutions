def indices_of_substring(text):
    try:
        target = input().strip()
    except EOFError:
        return []

    indices = [i for i in range(len(text)) if text.startswith(target, i)]
    return (
        str(indices)
        if len(indices) == 0
        else str([0]) if not target or target == "" else str(indices)
    )