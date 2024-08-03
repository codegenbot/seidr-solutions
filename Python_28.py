from pathlib import Path


def concatenate(paths: List[Path]) -> str:
    return ":".join(map(str, paths))