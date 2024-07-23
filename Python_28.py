```
from typing import List, Iterable
from itertools import chain

def concatenate(iterable: Iterable[str]) -> str:
    return "".join(chain.from_iterable(map(str, iterable)))