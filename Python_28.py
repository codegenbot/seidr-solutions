```Python
from typing import List


def concatenate():
    num_strings = int(input("Enter the number of strings: "))
    strings = [input() for _ in range(num_strings)]
    concat_operator = input("Enter a concatenation operator (+,*, or ""): ")
    return "".join(strings).format(concat_operator.join(map(str, strings)))