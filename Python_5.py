import itertools

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return list(itertools.chain.from_iterable(zip(numbers, itertools.repeat(delimiter))))