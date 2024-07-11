from typing import List

def concatenate(n: int) -> str:
    return "".join(map(str, range(1, n+1)))