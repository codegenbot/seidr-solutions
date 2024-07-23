from typing import List


def string_xor(a: str, b: str) -> str:
    max_len = max(len(a), len(b))
    a += "0" * (max_len - len(a))  # pad with zeros if necessary
    b += "0" * (max_len - len(b))  # pad with zeros if necessary
    return "".join(str(int(x) ^ int(y)) for x, y in zip(a, b))