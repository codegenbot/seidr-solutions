```
from typing import List, Union

def filter_integers(values: List[Union[int, str]]) -> List[int]:
    return [value for value in values if isinstance(value, int)]