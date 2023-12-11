def get_indices(text: str, target: str) -> List[int]:
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            indices.append(i)
    return indices