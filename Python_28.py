```
def concatenate(strings) -> str:
    if not strings:
        return "No strings were provided."
    return " ".join(strings)