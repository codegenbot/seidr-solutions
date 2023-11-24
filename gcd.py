from typing import List

def gcd(a: int, b: int) -> int:
    while b:
        a, b = b, a % b
    return a

def indices_of_substring(text: str, target: str) -> List[int]:
    indices = []
    for i in range(len(text) - len(target) + 1):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices