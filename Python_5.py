import the typing module

from typing import List

fix the type hint from "List[int]" to "list[int]"

def intersperse(numbers: list[int], delimiter: int) -> list[int]:
    create an empty list named result
    iterate through the numbers list using a for loop
        append the current number to the result list
        check if we are not at the last index of the numbers list
            append the delimiter to the result list
    return the result list