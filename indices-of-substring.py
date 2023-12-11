def get_indices(text: str, target: str) -> List[int]:
    return [i for i in range(len(text)) if text.startswith(target, i)]