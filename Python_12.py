Solve the following code contest problem: Python/12. Problem description: Complete the following code given the task description and function signature..
Currently, the code is 
```
def longest(strings: List[str]) -> Optional[str]:
    if len(strings) == 0:
        return None
    else:
        max_len = -1
        longest_string = None
        for string in strings:
            if len(string) > max_len:
                max_len = len(string)
                longest_string = string
        return longest_string
``` 
Modify the code as  The error message indicates that the `List` type is not defined, and suggests using `list` instead. To fix the code, simply replace `List[str]` with `list` in the function signature:
```
def longest(strings: list) -> Optional[str]:
    # ...
```.